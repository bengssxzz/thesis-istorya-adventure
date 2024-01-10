using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using System;
using SimpleSQL;
using ThesisLibrary;
using System.Linq;

public class QuestionsManager : Singleton<QuestionsManager>
{
    public class QuestionsAnswer
    {
        // The PlayerID is the primary key and also autoincrements itself
        // the SQLite database so we reflect that here with these attributes.
        [PrimaryKey, AutoIncrement] public int id { get; set; }
        public string question { get; set; }
        public string c_answer { get; set; }
        public string w_answers { get; set; }
    }

    public event Action<int, string, string[]> OnQuestionTrigger;


    private SimpleSQLManager dbManager;
    private Dictionary<string, List<QuestionsAnswer>> questionList;

    public string CurrentQuestionTable { get; private set; } = "Chapter1";
    public int CurrentIDQuestion { get; private set; }

    protected override void Awake()
    {
        base.Awake();

        dbManager = GetComponent<SimpleSQLManager>();
        questionList = new Dictionary<string, List<QuestionsAnswer>>();
    }

    private void Start()
    {
        InitializeQuestionAnswer("Chapter1");
    }

    private void InitializeQuestionAnswer(params string[] tableName) //Get all the data in DB and put it inside the dictionary
    {
        foreach (string name in tableName)
        {
            string sql = String.Format("SELECT * FROM {0}", tableName);
            List<QuestionsAnswer> qanda = dbManager.Query<QuestionsAnswer>(sql);
            questionList.Add(name, qanda);
        }
    }

    public void TriggerQuestion(string questionFrom) //Trigger questions behaviour
    {
        UIManager.Instance.ChangeUIState = UIManager.GUIState.QandA;

        CurrentQuestionTable = questionFrom;
        var info = GetQuestionFrom(questionFrom);
        CurrentIDQuestion = info.Item1;
        OnQuestionTrigger?.Invoke(info.Item1, info.Item2, info.Item3);
    }
    public (int, string, string, string[]) GetQuestionInfo(string tableName)
    {
        var questionInfo = ThesisUtility.RandomGetObject(questionList[tableName].ToArray());

        string[] wrongAnswerList = questionInfo.w_answers.Split(";", StringSplitOptions.RemoveEmptyEntries);

        return (questionInfo.id, questionInfo.question, questionInfo.c_answer, wrongAnswerList);
    }
    private (int, string, string[]) GetQuestionFrom(string tableName, int wrongAnswerCount = 1) //Return ID, question, and list of choices
    {
        int questionID;
        string question = "";
        string correctAns = "";
        string[] wrongAns = new string[wrongAnswerCount];

        string[] choices;

        var questionInfo = ThesisUtility.RandomGetObject(questionList[tableName].ToArray()); //Get random list

        questionID = questionInfo.id;
        question = questionInfo.question;
        correctAns = questionInfo.c_answer;

        //Wrong answer list
        string[] wrongAnswerList = questionInfo.w_answers.Split(";", StringSplitOptions.RemoveEmptyEntries);

        for (int i = 0; i < wrongAns.Length; i++)
        {
            string selected = "";

            //To prevent duplicating wrong answer
            do
            {
                selected = ThesisUtility.RandomGetObject(wrongAnswerList);

            } while (wrongAns[i] == selected);

            wrongAns[i] = selected;
        }

        // Merge correctAns and wrongAns into choices
        choices = new string[] { correctAns }.Concat(wrongAns).ToArray();
        choices = ThesisUtility.Shuffle(choices);

        return (questionID, question, choices);
    }
    public bool CheckQuestionAnswer(int QuestionId, string tableName, string user_answer) //Checking the answer
    {
        // Check if the table name exists in the dictionary
        if (questionList.TryGetValue(tableName, out List<QuestionsAnswer> questionAnswers))
        {
            // Find the QuestionsAnswer object with the specified QuestionId
            QuestionsAnswer questionInfo = questionAnswers.Find(q => q.id == QuestionId);

            if (questionInfo != null)
            {
                // Check if the user's answer matches the correct answer
                return user_answer == questionInfo.c_answer;
            }
            else
            {
                // Handle the case where the QuestionId is not found
                Debug.LogError("Checking answer to table question ID is null");
                return false;
            }
        }
        else
        {
            // Handle the case where the table name is not found in the dictionary
            Debug.LogError("Table is missing/wrong spelling");
            return false;
        }
    }


}

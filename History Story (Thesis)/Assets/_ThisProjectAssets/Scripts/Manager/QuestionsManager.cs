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

    public void TriggerQuestion(string questionFrom, int totalChoices = 2) //Trigger questions behaviour
    {
        UIManager.Instance.ChangeUIState = UIManager.GUIState.QandA;

        CurrentQuestionTable = questionFrom;
        var info = GetQuestionFrom(questionFrom, totalChoices);
        CurrentIDQuestion = info.Item1;
        OnQuestionTrigger?.Invoke(info.Item1, info.Item2, info.Item3);
    }

    public (int, string, string[]) GetQuestionFrom(string tableName, int totalChoicesCount) //Return ID, question, and list of choices
    {
        int questionID;
        string question = "";
        string correctAns = "";
        //[] wrongAns = new string[totalChoicesCount];
        string[] wrongAnswerList;

        //string[] choices;
        List<string> choicesList = new List<string>();

        var questionInfo = ThesisUtility.RandomGetObject(questionList[tableName].ToArray()); //Get random list

        //The info of the question
        questionID = questionInfo.id;
        question = questionInfo.question;
        correctAns = questionInfo.c_answer;


        //Count choices
        choicesList.Add(correctAns); //Add correct answer in the list

        if(totalChoicesCount > 1)
        {
            //Add wrong answer in the list
            wrongAnswerList = questionInfo.w_answers.Split(";", StringSplitOptions.RemoveEmptyEntries);

            //If the wrong answer (including the correct answer) is above total choices count
            if(wrongAnswerList.Length + 1 >= totalChoicesCount)
            {
                do
                {
                    var selected = "";
                    selected = ThesisUtility.RandomGetObject(wrongAnswerList);

                    if (!choicesList.Contains(selected))
                    {
                        choicesList.Add(selected);
                    }
                    //Loop until the count choices is the same as total choice count
                } while (choicesList.Count != totalChoicesCount);
            }
            else
            {
                Debug.LogError(String.Format("question ID: {0}, doesnt have enough wrong answer array", questionID));
            }
        }

        choicesList = ThesisUtility.Shuffle(choicesList.ToArray()).ToList();

        return (questionID, question, choicesList.ToArray());

        ////Wrong answer list
        //string[] wrongAnswerList = questionInfo.w_answers.Split(";", StringSplitOptions.RemoveEmptyEntries);

        //for (int i = 0; i < wrongAns.Length; i++)
        //{
        //    string selected = "";

        //    //To prevent duplicating wrong answer
        //    do
        //    {
        //        selected = ThesisUtility.RandomGetObject(wrongAnswerList);

        //    } while (wrongAns[i] == selected);

        //    wrongAns[i] = selected;
        //}

        //// Merge correctAns and wrongAns into choices
        //choices = new string[] { correctAns }.Concat(wrongAns).ToArray();
        //choices = ThesisUtility.Shuffle(choices);

        //return (questionID, question, choices);
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

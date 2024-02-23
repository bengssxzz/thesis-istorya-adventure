using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using System;
using SimpleSQL;
using ThesisLibrary;
using System.Linq;
using UnityEngine.SceneManagement;








[Serializable]
public class QuestionsAnswer
{
    // The PlayerID is the primary key and also autoincrements itself
    // the SQLite database so we reflect that here with these attributes.
    [PrimaryKey, AutoIncrement] public int id { get; set; }
    public string question { get; set; }
    public string c_answer { get; set; }
    public string w_answers { get; set; }
}


public class QuestionsManager : Singleton<QuestionsManager>
{
    [Serializable]
    public class RegisterSceneQuestions
    {
        public string sceneName;
        public string qandATable;
    }

    

    public event Action<int, string, string[]> OnQuestionUITrigger;


    [SerializeField] private List<RegisterSceneQuestions> registerSceneQandA = new List<RegisterSceneQuestions>();


    private SimpleSQLManager dbManager;
    private Dictionary<string, List<QuestionsAnswer>> questionList;

    //[SerializeField] private string[] questionTableName;

    private int currentQandAId = -1;
    private string currentSceneTable;

    private int questionScorePointHolder = 0;
    private int powerPointHolder = 0;


    public (int, int) GetDesiredReward { get { return (powerPointHolder, questionScorePointHolder); } }


    protected override void Awake()
    {
        base.Awake();

        dbManager = GetComponent<SimpleSQLManager>();

        InitializeQuestionAnswer();
    }

    private void InitializeQuestionAnswer() //Get all the data in DB and put it inside the dictionary
    {
        questionList = new Dictionary<string, List<QuestionsAnswer>>();

        //Get the unique table name in the list
        List<string> uniqueTables = registerSceneQandA.Select(x => x.qandATable).Distinct().ToList();

        foreach (string tableName in uniqueTables)
        {
            Debug.Log("TABLE NAME REGISTERED: " + tableName);
            string sql = String.Format("SELECT * FROM {0}", tableName);
            List<QuestionsAnswer> qanda = dbManager.Query<QuestionsAnswer>(sql);
            
            questionList.Add(tableName, qanda); //TableName Key : QandAInfo Value
        }
    }

    private void SetCurrentTableScene()
    {
        var currentScene = SceneManager.GetActiveScene().name; //Get the name of the current scene

        //Check if the current is registered to have a table name
        if (registerSceneQandA.Exists(x => x.sceneName == currentScene))
        {
            var _tablename = registerSceneQandA.FirstOrDefault(x => x.sceneName == currentScene).qandATable;
            currentSceneTable = _tablename; //Set a current use table name
        }
        else
        {
            Debug.LogWarning($"THIS {currentScene} SCENE IS NOT REGISTERED TO HAVE A QUESTIONS");
        }

    }

    
    public void QuestionTriggerUI(int powerPoints, int questionPoint) //Trigger the UI question
    {
        questionScorePointHolder = questionPoint;
        powerPointHolder = powerPoints;

        SetCurrentTableScene();

        var qandaInfos = RequestQandA(4);

        UI_Manager.Instance.OpenMenu("Question UI");
        OnQuestionUITrigger?.Invoke(qandaInfos.Item1, qandaInfos.Item2, qandaInfos.Item3);
    }

    public QuestionsAnswer GetQandAInfo(int questionID)
    {
        var questionInfo = questionList[currentSceneTable].FirstOrDefault(x => x.id == questionID);

        if(questionInfo != null)
        {
            return questionInfo;
        }

        Debug.LogError($"QUESTION ID {questionID} IS NOT EXIST IN {currentSceneTable} TABLE");
        return null;
    }

    public delegate void QandAInfos((int, string, string[]) info);
    //public void TriggerQuestion(string questionFrom, int totalChoices = 2) //Trigger questions behaviour
    //{
    //    //UIManager.Instance.ChangeUIState = UIManager.GUIState.QandA;
    //    UI_Manager.Instance.OpenMenu("Question UI");

    //    CurrentQuestionTable = questionFrom;
    //    var info = RequestQandA(questionFrom, totalChoices);
    //    CurrentIDQuestion = info.Item1;
    //    OnQuestionUITrigger?.Invoke(info.Item1, info.Item2, info.Item3);
    //}
    

    public (int, string, string[]) RequestQandA(string desiredTableName, int totalChoicesCount = 2) //Request a question with desired table
    {
        if (questionList.ContainsKey(desiredTableName))
        {
            //Table exist

            currentSceneTable = desiredTableName;

            int questionID;
            string question = "";
            string correctAns = "";
            string[] wrongAnswerList;

            List<string> choicesList = new List<string>();

            var questionInfo = ThesisUtility.RandomGetObject(questionList[desiredTableName].ToArray()); //Get random list

            currentQandAId = questionInfo.id; //Set the id

            //The info of the question
            questionID = questionInfo.id;
            question = questionInfo.question;
            correctAns = questionInfo.c_answer;


            //Count choices
            choicesList.Add(correctAns); //Add correct answer in the list

            if (totalChoicesCount > 1)
            {
                //Add wrong answer in the list
                wrongAnswerList = questionInfo.w_answers.Split(";", StringSplitOptions.RemoveEmptyEntries);

                //If the wrong answer (including the correct answer) is above total choices count
                if (wrongAnswerList.Length + 1 >= totalChoicesCount)
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

        }
        else
        {

            return default;
        }

        
    }
    public (int, string, string[]) RequestQandA(int totalChoicesCount = 2) //Request a question with current table
    {
        SetCurrentTableScene();

        return RequestQandA(currentSceneTable, totalChoicesCount);
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
    public bool CheckQuestionAnswer(string user_answer)
    {
        // Find the QuestionsAnswer object with the specified QuestionId
        QuestionsAnswer questInfo = questionList[currentSceneTable].Find(x => x.id == currentQandAId);


        if (questInfo != null)
        {
            // Check if the user's answer matches the correct answer
            return user_answer == questInfo.c_answer;
        }
        else
        {
            // Handle the case where the QuestionId is not found
            Debug.LogError("Checking answer to table question ID is null");
        }

        Debug.Log($"CorrentAnswer: {questInfo.c_answer}");
        return false;

    }











    private string GetCurrentTable()
    {
        switch (GetCurrentFolderName())
        {
            case "_Introduction":
                return "";
            case "Chapter 1":
                return "Chapter1";
            case "Chapter 2":
                return "Chapter2";
            case "Chapter 3":
                return "Chapter3";
            case "Chapter 4":
                return "Chapter4";
            case "Chapter 5":
                return "Chapter5";
            default:
                return "";
        }
    }

    private string GetCurrentFolderName() //Get the folder name of the current scene
    {
        // Get the full path of the current scene
        string scenePath = SceneManager.GetActiveScene().path;

        // Get the directory (folder) name from the path
        string folderName = Path.GetDirectoryName(scenePath);

        // Extract just the folder name without the path
        string folderNameOnly = Path.GetFileName(folderName);

        return folderNameOnly;
    }











}

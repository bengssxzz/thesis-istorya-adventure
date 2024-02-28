using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using System;
using SimpleSQL;
using ThesisLibrary;
using System.Linq;
using UnityEngine.SceneManagement;
using Cysharp.Threading.Tasks;

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
    private List<int> doneQuestionList;
    private int maxDoneQuestion;

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
            var sceneQandA = registerSceneQandA.FirstOrDefault(x => x.sceneName == currentScene);
            var _tablename = sceneQandA.qandATable;

            if (currentSceneTable != _tablename)
            {
                //Reset the already done list
                doneQuestionList = new List<int>();
                maxDoneQuestion = questionList[_tablename].Count - 5;
            }

            currentSceneTable = _tablename; //Set a current use table name
        }
        else
        {
            Debug.LogWarning($"THIS {currentScene} SCENE IS NOT REGISTERED TO HAVE A QUESTIONS");
        }

    }
    private bool CheckValidQuestion(int questionID)
    {
        if (doneQuestionList != null)
        {
            if (doneQuestionList.Contains(questionID))
            {
                //Question is already show up
                return false;
            }
            else
            {
                //Question is not yet show up
                if(doneQuestionList.Count >= maxDoneQuestion) { doneQuestionList = new List<int>(); }

                doneQuestionList.Add(questionID);
                return true;
            }
        }
        else
        {
            doneQuestionList = new List<int>();
            maxDoneQuestion = questionList[currentSceneTable].Count - 5;

            return true;
        }

    }
    private async UniTask<QuestionsAnswer> GetRandomQuestionInfo(string tableName)
    {
        do
        {
            var questionInfo = ThesisUtility.RandomGetObject(questionList[tableName].ToArray()); //Get random list

            if (CheckValidQuestion(questionInfo.id))
            {
                return questionInfo;
            }

            await UniTask.Yield();
        } while (true);
    }


    public async void QuestionTriggerUI(int powerPoints, int questionPoint) //Trigger the UI question
    {
        questionScorePointHolder = questionPoint;
        powerPointHolder = powerPoints;

        var qandaInfos = await RequestQandA(4);

        UI_Manager.Instance.OpenMenu("Question UI");
        OnQuestionUITrigger?.Invoke(qandaInfos.Item1, qandaInfos.Item2, qandaInfos.Item3);
    }

    public QuestionsAnswer GetQandAInfo(int questionID)
    {
        var questionInfo = questionList[currentSceneTable].FirstOrDefault(x => x.id == questionID);

        if (questionInfo != null)
        {
            return questionInfo;
        }

        Debug.LogError($"QUESTION ID {questionID} IS NOT EXIST IN {currentSceneTable} TABLE");
        return null;
    }

    public delegate void QandAInfos((int, string, string[]) info);


    public async UniTask<(int, string, string[])> RequestQandA(string desiredTableName, int totalChoicesCount = 2) //Request a question with desired table
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

            //var questionInfo = ThesisUtility.RandomGetObject(questionList[desiredTableName].ToArray()); //Get random list
            //var questionInfoList = questionList[desiredTableName].Where(info => !doneQuestionList.Contains(info.id)).ToArray();
            //var questionInfo = questionInfoList.RandomGetObject();

            var questionInfo = await GetRandomQuestionInfo(desiredTableName);




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
    public async UniTask<(int, string, string[])> RequestQandA(int totalChoicesCount = 2) //Request a question with current table
    {
        SetCurrentTableScene();

        return await RequestQandA(currentSceneTable, totalChoicesCount);
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

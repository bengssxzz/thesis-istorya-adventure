using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using System;



public class QuestionsManager : MonoBehaviour
{
    [System.Serializable] public class QandA
    {
        public int questionNumber; //Question number
        public string questionText; //Questions
        public string correctAnswer; //Correct answer
        public string[] wrongAnswers; //List of wrong answer
    }
    [System.Serializable] public class QuestionList
    {
        public QandA[] questions;
        public QandA[] questions1;
    }

    public enum QuestionType
    {
        Question1,
        Question2
    }


    public static QuestionsManager instance;
          

    [SerializeField] private TextAsset jsonQuestionaire;
    [SerializeField] private QuestionType type;
    private QuestionList questionsList = new QuestionList();

    private void Awake()
    {
        if(instance == null)
        {
            instance = this;
        }
        else
        {
            DestroyImmediate(gameObject);
        }
    }


    private void Start()
    {
        questionsList = JsonUtility.FromJson<QuestionList>(jsonQuestionaire.text);

        
    }

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.LeftShift))
        {
            var question = GenerateQandA(type);
            Debug.Log(question.Item1);
            Debug.Log(question.Item2);
            Debug.Log(question.Item3);

            int selectedWrongIndex = UnityEngine.Random.Range(0, question.Item4.Length);
            Debug.Log(question.Item4[selectedWrongIndex]);

            Debug.Log("Check: " + CheckAnswer(question.Item1, "Adobo"));
        }
    }

    private QandA[] SetType(QuestionType _type)
    {
        switch (_type)
        {
            case QuestionType.Question1:
                return questionsList.questions;

            case QuestionType.Question2:
                return questionsList.questions1;
            default:
                return null;
        }
    }

    public (int, string, string, string[]) GenerateQandA(QuestionType _type)
    {
        QandA[] questionType = SetType(_type);

        int questionIndex = UnityEngine.Random.Range(0, questionType.Length);

        int number = questionType[questionIndex].questionNumber;
        string q = questionType[questionIndex].questionText;
        string answer = questionType[questionIndex].correctAnswer;
        string[] arrayOfWrongAnswer = questionType[questionIndex].wrongAnswers;

        int indexWrongAnswer = UnityEngine.Random.Range(0, arrayOfWrongAnswer.Length);
        string choosenWrongAnswer = arrayOfWrongAnswer[indexWrongAnswer];


        return (
            number, //Item1 = Question number
            q, //Item2 = Question
            answer, //Item3 = Correct answer
            arrayOfWrongAnswer //Item4 = Wrong Answer
            );
    }
    
    public bool CheckAnswer(int _questionNumber, string answer)
    {
        foreach (var item in questionsList.questions)
        {
            if(item.questionNumber == _questionNumber)
            {
                 return item.correctAnswer == answer;
            }
        }

        return false;
    }


}

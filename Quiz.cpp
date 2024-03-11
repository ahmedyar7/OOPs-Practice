#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

class Questions
{
private:
    string text;
    vector<string> options;
    int correct_options;

public:
    // Constructor
    Questions(){};
    Questions(string text, vector<string> options, int correct_options)
    {
        this->text = text;
        this->options = options;
        this->correct_options = correct_options;
    }
    // Getters
    string get_text() { return text; }
    vector<string> get_options() { return options; }
    int get_correct_options() { return correct_options; }
};

class Quiz
{
private:
    string title;
    vector<Questions> questions;

public:
    Quiz(string title, vector<Questions> questions)
    {
        this->title = title;
        this->questions = questions;
    }
    // Getters
    string get_title() { return title; }

    // Methods
    void add_questions(Questions q)
    {
        questions.push_back(q);
    }
    vector<Questions> get_questions() { return questions; }
};

class QuizManager
{
private:
    vector<Quiz> quizzes;

public:
    QuizManager(){};
    QuizManager(vector<Quiz> quizzes)
    {
        this->quizzes = quizzes;
    }
    // Methods
    vector<Quiz> get_quiz() { return quizzes; }

    void add_quizes(Quiz quiz)
    {
        quizzes.push_back(quiz);
    }
    void display_info()
    {
        cout << "Welcome to the quiz Game" << endl;
        cout << "1. Enter The Quiz Game" << endl;
        cout << "2. Exit The Quiz Game  " << endl;
        cout << endl;
        cout << "Enter Your Choice: ";
    }

    void start_quiz(Quiz quiz)
    {
        int score = 0;
        for (auto q : quiz.get_questions())
        {
            cout << q.get_text() << endl;
            vector<string> options = q.get_options();
            for (size_t i = 0; i < options.size(); i++)
            {
                cout << i + 1 << ". " << options[i] << endl;
            }
            int user_answer;
            cout << "Enter Your Answer (1-" << options.size() << " )";
            cin >> user_answer;
            if (user_answer = q.get_correct_options())
            {
                cout << "Correct Answer! " << endl;
                score++;
            }
            else
            {
                cout << "Incorrect Answer! Correct Answer is: " << q.get_correct_options() << endl;
            }
        }
        cout << "Quiz Completed Your Score: " << score << "/" << quiz.get_questions().size();
    }
};

int main()
{
    // Creating quiz
    QuizManager quizManager;
    Questions questions;
    Quiz quiz1("General Knowledge", questions);
    quiz1.add_questions(Questions("What is the capital of France?", {"Paris", "London", "Berlin", "Madrid"}, 1));
    quiz1.add_questions(Questions("What is the largest planet in the solar system?", {"Jupiter", "Saturn", "Mars", "Earth"}, 0));
    quizManager.add_quizes(quiz1);

    Quiz quiz2("Programming");
    quiz2.add_questions(Questions("What does OOP stand for?", {"Object Oriented Programming", "Object Oriented Process", "Object Oriented Protocol", "Object Oriented Principle"}, 0));
    quiz2.add_questions(Questions("Which language is known as the 'mother' of all programming languages?", {"C", "Python", "Java", "Assembly"}, 3));
    quizManager.add_quizes(quiz2);
}
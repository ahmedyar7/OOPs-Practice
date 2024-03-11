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
};
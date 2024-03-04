#include <iostream>
#include <vector>
using namespace std;

class Task
{
private:
    int taskID;
    string taskName;
    string taskDescription;
    string deadline;
    string priority;
    string status;

public:
    // Constructor
    Task(int ID, string name, string description, string d_line, string t_priority, string t_status)
    {
        taskID = ID;
        taskName = name;
        taskDescription = description;
        deadline = d_line;
        priority = t_priority;
        status = t_status;
    }

    // Getter
    int getTaskID() { return taskID; }

    string getTaskName() { return taskName; }

    string getTaskDesc() { return taskDescription; }

    string getTaskDeadline() { return deadline; }

    string getTaskPriority() { return priority; }

    string getTaskStatus() { return priority; }

    // setters
    int getTaskID(int ID) { taskID = ID; }

    string setTaskName(string name) { taskName = name; }

    string setTaskDesc(string description) { taskDescription = description; }

    string setTaskDeadline(string d_line) { deadline = d_line; }

    string setTaskPriority(string t_priority) { priority = t_priority; }

    string setTaskStatus(string t_status) { status = t_status; }
};

class TaskManager
{
private:
    vector<Task> tasks;

public:
    void addTask(Task task)
    {
        tasks.push_back(task);
    }

    void removeTask(int id)
    {
        for (auto i = tasks.begin(); i != tasks.end(); i++)
        {
            if (i->getTaskID() == id)
            {
                tasks.erase(i);
            }
        }
        cout << "Task wit ID: " << id << " Not Found" << endl;
    }

    void displayAllTask()
    {
        for (auto &task : tasks)
        {
            cout << "Task ID: " << task.getTaskID() << endl;
            cout << "Task Name: " << task.getTaskName() << endl;
            cout << "Task Description: " << task.getTaskDesc() << endl;
            cout << "Task Priority: " << task.getTaskPriority() << endl;
            cout << "Task Status: " << task.getTaskStatus() << endl;

            cout << endl;
        }
    }
};

class UserInterface
{
private:
    TaskManager taskmanager;

public:
    void DisplayMenu()
    {
        int choice;
        while (choice != 4)
        {
            cout << "Task Manager Application" << endl;
            cout << "1. Add Task" << endl;
            cout << "2. Remove Task" << endl;
            cout << "3. Display All Task" << endl;
            cout << "4. Exit" << endl;

            cout << "Enter Your Choice" << endl;
            cin >> choice;

            switch (choice)
            {
            case 1:
                addtask();
                break;
            case 2:
                removeTask();
                break;
            case 3:
                displayAllTask();
                break;
            case 4:
                cout << "Exiting..." << endl;
                break;
            }
        }
    }

    void addtask()
    {
        int id;
        string name, description, deadline, priority, status;

        cout << "Enter The task ID: ";
        cin >> id;

        cout << "Enter Task Name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter Task Description: ";
        getline(cin, description);

        cout << "Enter DeadLine: ";
        getline(cin, deadline);

        cout << "Enter Priority: ";
        getline(cin, priority);

        cout << "Enter Status: ";
        getline(cin, status);

        Task task(id, name, description, deadline, priority, status);
        taskmanager.addTask(task);

        cout << "Task Added Successfully" << endl;
    }

    void removeTask()
    {
        int id;
        cout << "Enter Task ID: ";
        cin >> id;
        taskmanager.removeTask(id);
    }

    void displayAllTask()
    {
        taskmanager.displayAllTask();
    }
};

int main()
{
    UserInterface ui;
    ui.DisplayMenu();
}
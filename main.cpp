#include <iostream>
#include <vector>
#include <string>

using namespace std;

class TodoList {
private:
    vector<string> tasks;  // Vector to store tasks

public:
    // Function to add a task
    void addTask(const string& task) {
        tasks.push_back(task);
        cout << "Task added successfully!" << endl;
    }

    // Function to delete a task by index
    void deleteTask(int index) {
        if (index < 0 || index >= tasks.size()) {
            cout << "Invalid task number!" << endl;
        } else {
            tasks.erase(tasks.begin() + index);
            cout << "Task deleted successfully!" << endl;
        }
    }

    // Function to view all tasks
    void viewTasks() const {
        if (tasks.empty()) {
            cout << "No tasks to display." << endl;
        } else {
            cout << "Here are the tasks:" << endl;
            for (int i = 0; i < tasks.size(); ++i) {
                cout << i + 1 << ". " << tasks[i] << endl;
            }
        }
    }
};

int main() {
    TodoList todoList;
    int choice;
    string task;
    int taskNumber;

    do {
        cout << "\n--- To-Do List Manager ---\n";
        cout << "1. Add Task\n";
        cout << "2. Delete Task\n";
        cout << "3. View Tasks\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();  // To ignore the leftover newline character from the previous input

        switch (choice) {
            case 1:
                // Add task
                cout << "Enter the task to add: ";
                getline(cin, task);  // To allow spaces in task
                todoList.addTask(task);
                break;

            case 2:
                // Delete task
                todoList.viewTasks();  // Show tasks before asking to delete
                cout << "Enter the task number to delete: ";
                cin >> taskNumber;
                todoList.deleteTask(taskNumber - 1);  // Subtract 1 for zero-based index
                break;

            case 3:
                // View tasks
                todoList.viewTasks();
                break;

            case 4:
                // Exit
                cout << "Exiting To-Do List Manager. Goodbye!" << endl;
                break;

            default:
                cout << "Invalid choice! Please try again." << endl;
                break;
        }
    } while (choice != 4);

    return 0;
}

//TO DO LIST
//BY VISHAL JAKHAR

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> tasks = {};

    cout << "1. show all tasks." << endl
         << "2. add a task." << endl
         << "3. remove a task." << endl;
    
    while(true){
        int command;
        cout << "enter a command: ";
        cin >> command;

        if(command == 0){
            cout << "1. show all tasks." << endl
                 << "2. add a task." << endl
                 << "3. remove a task." << endl;
        }
    
        else if(command == 1){
            if(tasks.empty() == 1){
                cout << "No tasks to display. Add a task." << endl; 
            }
            else{
                cout << "task list: " << endl ;
                for (auto str : tasks) {
                    cout << "- " << str << endl;
                }
            }
        }

        else if(command == 2){
            cin.ignore();
            string temp;
            cout << "enter a task: ";
            getline(cin, temp);
            tasks.push_back(temp);
            cout << "task added." << endl;
        }

        else if(command == 3){
            if(tasks.empty() == 1){
                cout << "no tasks to remove." << endl;
            }
            else{
                tasks.pop_back();
                cout << "last task removed." <<endl;
            }
        }
        else {
            cout << "invalid command. please enter 0 to view the menu again." << endl;
        }
    }
    return 0;
}
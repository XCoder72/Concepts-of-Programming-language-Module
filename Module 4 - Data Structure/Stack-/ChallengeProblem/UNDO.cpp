// Uudo System using Stack

#include <iostream>
#include <stack>
#include <string>
using namespace std;

stack<string> Actions;

// Add recent action
void recent_Actions_Done(string action)
{
    Actions.push(action);
}

// Undo latest action
string Undo()
{
    if (!Actions.empty())
    {
        string action = Actions.top();
        Actions.pop();
        return action;
    }

    return "Nothing to Undo";
}

int main()
{
    while (true)
    {
        string action;

        cout << "Enter Recent Action (or 'undo' / 'exit'): ";
        getline(cin, action);

        if (action == "exit")
        {
            break;
        }

        else if (action == "undo")
        {
            if (!Actions.empty())
            {
                cout << "Undo Action: " << Undo() << endl;

                if (!Actions.empty())
                    cout << "Previous Action: " << Actions.top() << endl;
                else
                    cout << "No Previous Action" << endl;
            }
            else
            {
                cout << "Nothing to Undo" << endl;
            }
        }

        else
        {
            recent_Actions_Done(action);
            cout << "Action Added: " << action << endl;
        }

        cout << endl;
    }

    return 0;
}
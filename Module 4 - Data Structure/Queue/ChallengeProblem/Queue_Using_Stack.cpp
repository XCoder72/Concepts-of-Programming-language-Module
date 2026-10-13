/* implementation of a queue using two stacks in C++14. */

#include <iostream>
#include <stack>
using namespace std;

void Push(stack<int>& s1, int x)
{
    s1.push(x);
}

int pop(stack<int>& s1, stack<int>& s2)
{
    if (s2.empty())
    {
        while (!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
    }

    if (s2.empty())
    {
        cout << "Queue is empty" << endl;
        return -1;
    }

    int x = s2.top();
    s2.pop();

    return x;
}

int main()
{
    stack<int> s1, s2;

    while (true)
    {
        int choice;

        cout << "\n1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
            {
                int x;
                cout << "Enter element: ";
                cin >> x;

                Push(s1, x);
                cout << "Element added: " << x << endl;
                break;
            }

            case 2:
            {
                int result = pop(s1, s2);

                if (result != -1)
                    cout << "Removed element: " << result << endl;

                break;
            }

            case 3:
                return 0;

            default:
                cout << "Invalid choice" << endl;
        }
    }
}
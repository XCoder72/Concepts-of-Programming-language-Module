/*
C++ provides the std::stack container adapter.

Syntax
> stack<int> s;  // Create a stack of integers
> s.push(x);      // Add an element x to the stack
> s.pop();        // Remove the top element from the stack
> s.top();        // Access the top element of the stack
> s.empty();      // Check if the stack is empty
> s.size();       // Number of elements in the stack
*/

#include <iostream>
#include <stack>
using namespace std;

int main()
{
    // Create a Stack
    stack<int> s;

    // Adding Elements

    s.push(10);
    s.push(20);

    cout << endl;
    
    // Accessing Top Element
    cout << "Accessing Top Element" << endl;
    cout << "Top: " << s.top() << endl;

    cout << endl;
    
    // Size of Stack
    cout << "Size of Stack: " << s.size() << endl;

    cout << endl;

    // Removing Top Element
    cout << "Removing Top Element" << endl;
    s.pop();

    cout << "New Top: " << s.top() << endl;

    s.pop();
    cout << endl;
    
    // Checking if Stack is Empty
    cout << "Checking if Stack is Empty" << endl;
    if (s.empty())
        cout << "Stack is Empty" << endl;
    else
        cout << "Stack is Not Empty" << endl;
    cout << endl;

    // s.pop(); // This will cause an error since the stack is already empty
    // s.top(); // This will also cause an error since the stack is empty

    return 0;
}
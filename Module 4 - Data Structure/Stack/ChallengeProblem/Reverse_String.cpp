#include <iostream>
#include <stack>
#include <string>
using namespace std;

string reverse_string(string str)
{
    stack<char> Reverse_string;
    string ReverseString = "";

    // Push each character into stack
    for(int i = 0; i < str.length(); i++)
    {
        Reverse_string.push(str[i]);
    }

    // Pop characters from stack
    while(!Reverse_string.empty())
    {
        ReverseString += Reverse_string.top();
        Reverse_string.pop();
    }

    return ReverseString;
}

int main()
{
    string str;

    cout << "Enter String: ";
    getline(cin, str);

    string result = reverse_string(str);

    cout << "Reverse String: " << result << endl;

    return 0;
}
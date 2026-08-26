// Reverse a string without using a built-in reverse function.

#include <iostream>
using namespace std;

void Reversestring(string str){
    for (int i = str.length() - 1; i >= 0; i--){
        cout << str[i];
    }
}

int main()
{
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    cout << "Reversed string: ";
    Reversestring(input);
    return 0;
}
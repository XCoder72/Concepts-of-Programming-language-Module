/*Create a Username Validator that checks:
Length >= 5
No spaces
Output:
Valid Username
or
Invalid Username*/

#include <iostream>
using namespace std;

void validateUsername(string username) {
    if (username.length() >= 5 && username.find(' ') == string::npos) {
        cout << "Valid Username" << endl;
    } else {
        cout << "Invalid Username" << endl;
    }
}
int main()
{
    string username;
    cout << "Enter a username: ";
    getline(cin, username); // reads until Enter/newline
    validateUsername(username);
    return 0;
}
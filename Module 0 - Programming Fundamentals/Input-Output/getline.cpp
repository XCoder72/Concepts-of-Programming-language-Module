// cin       → reads until whitespace
// getline(cin, variablename) → reads until Enter/newline

#include <iostream>
using namespace std;

int main()
{
    string fullname;
    cout << "Enter your full name: ";
    getline(cin, fullname); // reads until Enter/newline
    cout << "You entered: " << fullname << endl;

    string address;
    cout << "Enter your address: ";
    getline(cin, address); // reads until Enter/newline
    cout << "You entered: " << address << endl;
    return 0;
}
/* Password Verification
Keep asking the user for a password until they enter: it in 3 attempt
admin123
Then display:
Access Granted */



#include <iostream>
using namespace std;

int main()
{
    string newPassword, password;
    int attempts = 0;

    cout << "Create a Password: ";
    cin >> newPassword;

    while(attempts < 3)
    {
        cout << "Enter Password: ";
        cin >> password;

        if(password == newPassword)
        {
            cout << "Access Granted";
            return 0;
        }

        attempts++;
        cout << "Password Incorrect.\n";
    }

    cout << "Access Denied";
}
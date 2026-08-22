/*A nested if is an if statement inside another if statement, 
used for multiple dependent decisions. */

/* 
if(condition1)
{
    if(condition2)
    {
        statement;
    }
}
*/

#include <iostream>
using namespace std;

int main()
{
    // Example 1 - College Admission
    int age = 18;
    int marks = 75;

    if(age >= 17)
    {
        if(marks >= 60)
        {
            cout << "Admission Granted\n";
        }
    }
    cout <<"-----------------\n";
    
    // example 2 - ATM System
    bool pinCorrect = true;
    int balance = 5000;

    if(pinCorrect)
    {
        if(balance >= 500)
        {
            cout << "Transaction Successful";
        }
    }
    return 0;
}
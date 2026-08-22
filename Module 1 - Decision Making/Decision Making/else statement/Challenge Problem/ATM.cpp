// ATM Withdrawal System

#include <iostream>
using namespace std;

int main()
{
    int balance = 2000;
    int withdraw;
    cout << "Enter Withdraw Account :- ";
    cin >> withdraw;

    if(balance > withdraw)
    {
        cout << "Transaction Successful";
    }
    else
    {
        cout << "Insufficient Balance";
    }

    return 0;
}
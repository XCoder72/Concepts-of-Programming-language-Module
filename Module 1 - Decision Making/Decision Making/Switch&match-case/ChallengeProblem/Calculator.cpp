// Calculator 

#include <iostream>
using namespace std;

int main()
{
    float Num1,Num2;
    char Operator;
    cout << "Enter Number: ";
    cin >> Num1;
    cout << "Enter Number: ";
    cin >> Num2;
    cout << "Enter Operator[+,-,*,/,%]: ";
    cin >> Operator;

    switch(Operator)
    {
        case '+':
            cout << Num1+Num2;
            break;

        case '-':
            cout << Num1+Num2;
            break;

        case '*':
            cout << Num1+Num2;
            break;

        case '/':
            cout << Num1+Num2;
            break;

        case '%':
            cout << Num1+Num2;
            break;

        default:
            cout << "Invalid Operator";
    }

    return 0;
}
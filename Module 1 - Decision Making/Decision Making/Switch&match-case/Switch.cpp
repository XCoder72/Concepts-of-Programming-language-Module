/* switch makes the code cleaner 
when comparing one variable against fixed values. */

/*
switch(expression)
{
    case value1:
        statement;
        break; // break immediately exits the switch.
                  Without break, execution continues 
                  into the next case.

    case value2:
        statement;
        break; 

    default:
        statement;
}
*/

// switch only use when their is no range and non-constant value

// Example - Day od Week

#include <iostream>
using namespace std;

int main()
{
    int day;

    cout << "Enter Day Number (1-7): ";
    cin >> day;

    switch(day)
    {
        case 1:
            cout << "Monday";
            break;

        case 2:
            cout << "Tuesday";
            break;

        case 3:
            cout << "Wednesday";
            break;

        case 4:
            cout << "Thursday";
            break;

        case 5:
            cout << "Friday";
            break;

        case 6:
            cout << "Saturday";
            break;

        case 7:
            cout << "Sunday";
            break;

        default:
            cout << "Invalid Day";
    }

    return 0;
}

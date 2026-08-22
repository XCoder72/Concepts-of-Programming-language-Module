/* The if-else statement executes one block
 if the condition is true,
 otherwise it executes another block.
 */

 /* 
if(condition)
{
    statement1;
}
else
{
    statement2;
} 
 */

#include <iostream>
using namespace std;

int main()
{
    // Example 1 
    int age = 20;

    if(age >= 18)
    {
        cout << "Eligible to Vote \n";
    }
    else
    {
        cout << "Not Eligible to Vote \n";
    }

    // Example 2
    int marks = 35;

    if(marks >= 40)
    {
    cout << "Pass";
    }
    else
    {
    cout << "Fail";
    }

    return 0;
}
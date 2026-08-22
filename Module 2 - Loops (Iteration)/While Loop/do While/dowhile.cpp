// A do-while loop is an exit-controlled loop because the condition is checked after executing the loop body.
/*
Entry-Controlled vs Exit-Controlled

while
Check Condition
↓
True?
↓
Execute
The condition is checked before execution.

do-while
Execute
↓
Check Condition
↓
True?
↓
Repeat
The condition is checked after execution.
*/

/*
do
{
    statement;
}
while(condition);
Important: Notice the semicolon (;) after while(condition);
*/
# include<iostream>
using namespace std;

int main(){

    //Proof That do-while Executes Once
    cout <<"Proof That do-while Executes Once\n";
    
    int i = 1;

    do
    {
    cout << "10";
    }
    while(i < 1); // condition is false becuse i = 1

    // Example 1 _ Print Number 1 to 5
    cout <<"\nExample 1 _ Print Number 1 to 5\n";

    do
    {
        cout << i << endl;
        i++;
    }
    while(i <= 5);

    // ATM Menu
    cout <<"\nATM Menu\n";
    int choice;

    do
    {
        cout << "\n1. Balance";
        cout << "\n2. Deposit";
        cout << "\n3. Exit";
        cout << "\nEnter Choice: ";

        cin >> choice;

    } while(choice != 3);

    cout << "Thank You!";

    return 0;
}


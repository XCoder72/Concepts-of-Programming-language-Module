/* Why Do We Need Loop Control Statements?
Normally, a loop executes all iterations.
Sometimes we need to:
Stop the loop immediately.
Skip one iteration.
Leave a placeholder for future code (Python).
That's why loop control statements exist. */

/*
Types of Loop Control Statements
Statement
break - Eexits the loop immediately, 
        even if the loop condition is still true.
continue - skips the remaining statements in the current iteration 
           and starts the next iteration.
*/

#include<iostream>
using namespace std;

int main(){

//break
for(int i = 1; i <= 10; i++)
{
    if(i == 5)
        break; // stop when i=5

    cout << i << " ";
}

cout <<endl;

//Contine
for(int i = 1; i <= 5; i++)
{
    if(i == 3)
        continue;  // skip iteration  if i = 3

    cout << i << " ";
}

return 0;
}
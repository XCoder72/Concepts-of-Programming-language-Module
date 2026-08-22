/*
for(initialization; condition; update)
{
    statement;
}
*/

#include<iostream>
using namespace std;
#include <iostream>
using namespace std;

int main(){
    
    //Example 1 – Print 1 to 5
    cout << "Example 1 -- Print 1 to 5\n";

    for(int i = 1; i <= 5; i++)
    {
        cout << i << endl;
    }

    cout <<endl;

    // Example 2 – Even Numbers
    cout << "Example -- Even Numbers\n";

    for(int i = 2; i <= 10; i += 2)
    {
        cout << i << endl;
    }
    
    cout <<endl;

    // Example 3 – Countdown
    cout << "Example 3 -- Countdown\n";

    for(int i = 5; i >= 1; i--)
    {
        cout << i << endl;
    }
    
    cout <<endl;

    // Example 4 – Multiplication Table
    cout << "Example 4 -- Multiplication Table\n";int num = 5;

    for(int i = 1; i <= 10; i++)
    {
        cout << num << " x " << i << " = " << num * i << endl;
    }
    
    return 0;
}


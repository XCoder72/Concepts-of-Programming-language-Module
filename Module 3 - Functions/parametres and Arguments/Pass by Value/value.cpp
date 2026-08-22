/* Pass by value means a function receives a value to work with, 
rather than directly modifying the caller's original variable. 

in c++
When a variable is passed by value, C++ creates a copy of its value.
*/

#include <iostream>
using namespace std;

void change(int x)
{
    x = 100;
    cout <<"x = " << x << endl;
}

int main()
{
    int num = 10;

    cout << "num = " << num << endl;

    change(num);

    cout << "num = " << num << endl;

    return 0;
}

/* 
What happened?
main()
 num = 10
    │
    │ copy
    ▼
change()
 x = 10
    │
 x = 100
x is a separate variable.
Therefore:
num = 10
is unchanged. */
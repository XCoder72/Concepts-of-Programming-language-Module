/* Pass by reference allows a function to work with the original data, 
so changes made inside the function can affect the caller's variable.

C++ has explicit references using '&'.
*/


#include <iostream>
using namespace std;

void change(int &x)
{
    x = 100;
    cout << "x: " << x << endl;
}

int main()
{
    int num = 10;

    cout << "num: " << num << endl;

    change(num);

    cout << "num: " << num << endl;

    return 0;
}

/*
What happened?
main()

num = 10
  │
  │ reference
  ▼
x
  │
x = 100
  │
  ▼
num = 100
x refers to the same variable as num.
*/
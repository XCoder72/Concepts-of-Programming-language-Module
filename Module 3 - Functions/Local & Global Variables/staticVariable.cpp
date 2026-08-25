/*
static variable
A normal local variable is created each time a function is called. 
A static local variable in C++ keeps its value between function calls.
*/

#include <iostream>
using namespace std;

void counter()
{
    int count = 0;
    count++;
    cout << count << endl;
}

void Counter()
{
    static int count = 0;
    count++;

    cout << count << endl;
}

void login()
{
    static int attempts = 0;

    attempts++;

    cout << "Function called: "
         << attempts << " time(s)\n";
}

int main()
{
    counter();
    counter();
    counter();
/*
Every function call creates a new count.

Call 1 → count = 0 → 1 → destroyed
Call 2 → count = 0 → 1 → destroyed
Call 3 → count = 0 → 1 → destroyed
*/

   Counter();
   Counter();
   Counter();
/*
First call
count = 0 → 1

Second call
count = 1 → 2

Third call
count = 2 → 3
The variable retains its value between calls.
*/

    login();
    login();
    login();

    return 0;
}
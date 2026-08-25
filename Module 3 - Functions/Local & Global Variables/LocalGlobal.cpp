#include <iostream>
using namespace std;

int Age; // Global variable - age exists throughout the program.

void show()
{
    int age = 20; // Local variable - age exists inside show().
    cout << age << endl; // ✅ Access the local variable
    Age = age; // Assign the local value to the global variable
}

int main()
{
    show();

    // cout << age;   // ❌ age is local to show()
    cout << Age; // ✅ Access the global variable

    return 0; 
}
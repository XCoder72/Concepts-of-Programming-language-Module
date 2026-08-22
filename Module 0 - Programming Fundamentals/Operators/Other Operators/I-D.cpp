/*Increment and Decrement (C++ Only)
Increase or decrease a value by 1.
> post increment/decrement 
> pre increment/decrement */

# include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 10;

    cout << "Initial values: a = " << a << ", b = " << b << endl;
    
    // Increment operator
    a++; // a is now 6
    cout << "After post-incrementing, a = " << a << endl;
    ++a; // a is now 7
    cout << "After pre-incrementing, a = " << a << endl;

    // Decrement operator
    b--; // b is now 9
    cout << "After decrementing, b = " << b << endl;
    --b; // b is now 8
    cout << "After pre-decrementing, b = " << b << endl;

    return 0;
}
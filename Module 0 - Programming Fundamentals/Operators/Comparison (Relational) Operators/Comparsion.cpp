/* Comparison (Relational) Operators
Compare two values.
The result is always true/false or 1/0 (C++).
Operator
==	Equal
!=	Not Equal
>	Greater Than
<	Less Than
>=	Greater Than or Equal
<=	Less Than or Equal 
*/

#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 20;

    cout << "a == b: " << (a == b) << endl; // false
    cout << "a != b: " << (a != b) << endl; // true
    cout << "a > b: " << (a > b) << endl;   // false
    cout << "a < b: " << (a < b) << endl;   // true
    cout << "a >= b: " << (a >= b) << endl; // false
    cout << "a <= b: " << (a <= b) << endl; // true

    return 0;
}
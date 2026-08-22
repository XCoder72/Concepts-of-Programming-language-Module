/* Logical Operators
Used to combine multiple conditions.
Operator
AND	&& - both conditions must be true
OR	|| - only one condition must be true
NOT	! - negates the condition
*/

#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 10;
    int c = 15;

    // AND operator
    if (a < b && b < c) {
        cout << "Both conditions are true: a < b and b < c" << endl;
    }

    // OR operator
    if (a > b || b < c) {
        cout << "At least one condition is true: a > b or b < c" << endl;
    }

    // NOT operator
    if (!(a > b)) {
        cout << "The condition a > b is false" << endl;
    }

    return 0;
}
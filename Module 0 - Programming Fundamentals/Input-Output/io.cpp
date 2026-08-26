// Input - information entered by the user for processing.
// Output - result displayed to the user after processing the input.
// cout displays output with <<.
// cin takes input from the user with >>,reads until whitespace
// getline(cin, variable) takes input from the user including spaces.

#include <iostream>
using namespace std;

int main() {
    int num1, num2, sum;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2; // cin takes input from the user
    sum = num1 + num2;
    cout << "Sum: " << sum << endl; // cout displays output
    return 0;
}

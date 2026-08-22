#include <iostream>
using namespace std;

int main()
{
    int number = 10;

    int &ref = number; //ref is another name for number.

    cout << number << endl;
    cout << ref << endl;

    number = 20; //change the value of number.ref will also change because it is a reference to number.
    cout << number << endl;
    cout << ref << endl;
    return 0;
}
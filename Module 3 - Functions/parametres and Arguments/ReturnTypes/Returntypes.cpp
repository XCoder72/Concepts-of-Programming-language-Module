/* Returntypes decide which datatypes use function for argument and return.
To print return as an output 
* cout <<functioncall;
*/

#include <iostream>
#include <string>
using namespace std;

// int → returns an integer
int getAge()
{
    return 20;
}

// double → returns a decimal value
double getPrice()
{
    return 99.50;
}

// char → returns a single character
char getGrade()
{
    return 'A';
}

// string → returns text
string getName()
{
    return "X-Creator";
}

// bool → returns true or false
bool isPassed()
{
    return true;
}

// void → returns nothing
void showMessage()
{
    cout << "Welcome to C++ Functions\n";
}

int main()
{
    int age = getAge();
    double price = getPrice();
    char grade = getGrade();
    string name = getName();
    bool passed = isPassed();

    showMessage();

    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Price: " << price << endl;
    cout << "Grade: " << grade << endl;
    cout << "Passed: " << passed << endl;

    return 0;
}
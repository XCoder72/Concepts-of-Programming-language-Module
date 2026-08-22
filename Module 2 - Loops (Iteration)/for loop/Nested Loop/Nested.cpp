/* Syntax:
for(int i = 0; i < rows; i++)
{
    for(int j = 0; j < columns; j++)
    {
        statement;
    }

*/

#include<iostream>
using namespace std;

int main(){
// Example 1 – Print Coordinates
cout <<"Example 1 -- Print Coordinates\n"<<endl;
for(int i = 1; i <= 3; i++)
{
    for(int j = 1; j <= 3; j++)
    {
        cout << "(" << i << "," << j << ")" << endl;
    }
}

// Example 2 – Rectangle Pattern
cout <<"\nExample 2 -- Rectangle Pattern\n"<<endl;
for(int i = 1; i <= 3; i++)
{
    for(int j = 1; j <= 5; j++)
    {
        cout << "*";
    }
    cout << endl;
}

// Example 3 – Number Pattern
cout <<"\nExample 3 -- Number Pattern\n"<<endl;
for(int i = 1; i <= 3; i++)
{
    for(int j = 1; j <= 5; j++)
    {
        cout << j;
    }
    cout << endl;
}

}


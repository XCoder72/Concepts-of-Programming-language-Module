//Build a simple calculator supporting +, -, *, /, and %.

#include<iostream>
using namespace std;

int main(){
    int a ,b;
    cout << "Enter First number :- ";
    cin >> a;
    cout << "Enter Second Number :- ";
    cin >> b;
    
    cout << a << '+' << b << ":- "<< a+b << endl;
    cout << a << '-' << b << ":- "<< a-b << endl;
    cout << a << '*' << b << ":- "<< a*b << endl;
    cout << a << '/' << b << ":- "<< a/b << endl;
    cout << a << '%' << b << ":- "<< a%b << endl;
    
    return 0;
}
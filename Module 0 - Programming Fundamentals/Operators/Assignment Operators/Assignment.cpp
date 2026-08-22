/* Assignment Operators
Assign values to variables.
Operator	Example	Meaning
=	x = 5	Assign
+=	x += 2	Add and Assign
-=	x -= 2	Subtract and Assign
*=	x *= 2	Multiply and Assign
/=	x /= 2	Divide and Assign
%=	x %= 2	Modulus and Assign */

#include<iostream>
using namespace std;    

int main()
{
    int a = 10, b = 3;
    cout << "Initial value of a: " << a << endl;
    cout << "Initial value of b: " << b << endl;
    
    a += b; // a = a + b
    cout << "After a += b: " << a << endl;
    
    a -= b; // a = a - b
    cout << "After a -= b: " << a << endl;
    
    a *= b; // a = a * b
    cout << "After a *= b: " << a << endl;
    
    a /= b; // a = a / b
    cout << "After a /= b: " << a << endl;
    
    a %= b; // a = a % b
    cout << "After a %= b: " << a << endl;
    
    return 0;
}
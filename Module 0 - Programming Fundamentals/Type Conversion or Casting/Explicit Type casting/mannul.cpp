/* Explicit Type Conversion (Manual Type Conversion)
The programmer explicitly converts the data type. */

# include<iostream>
using namespace std;

int main(){
double x = 5.8;
int y = static_cast<int>(x); //static_cast - use as preferred method.
cout << x <<endl<< y;

return 0;
}
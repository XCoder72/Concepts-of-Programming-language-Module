/* C++ (Static Typing) 
C++ requires you to specify the datatype of a variable before using it*/

# include<iostream>
using namespace std;

    int main(){
        // variable declaration - creating a variable.
        int var;

        // variable initialization - assigning the first value to a variable.
        var = 10;
        cout << "The value of var is: " << var << endl;

        // Variable Assignment  - assigning a new value to an existing variable.
        var = 20;
        
        cout << "The value of var is: " << var << endl;

        /*c++ is static typing language, so we cannot assign a value of different datatype
         to a variable without explicit casting.*/

        // var = "Hello"; 
        // This will cause a compilation error because var is of type int and cannot hold a string value.
        
        // declaration of multiple variables of the same type in a single line.

        int var1 = 12, var2 = 10, var3 = 7;

        cout << "The value of var1 is: " << var1 << endl;
        cout << "The value of var2 is: " << var2 << endl;
        cout << "The value of var3 is: " << var3 << endl;
               
        return 0;

    }
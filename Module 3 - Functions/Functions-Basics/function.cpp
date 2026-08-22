/* syntax
   <returndatatypes><functionName>(paremeter){
         function body;
      returntype;
   }

   call function in int main()
   functioName(value);

   void    → return type
greet   → function name
()      → parameters
{}      → function body
      
*/

# include<iostream>
    using namespace std;

    void greet()
    {
    cout << "Hello\n";
    }

    void showAttendence(){
    for(int i=1;i<=5;i++){
      cout<<"\nstudent"<<i<<" Present\n";
    }
    }

    int main(){

    greet();

    // Create showAttendance() that prints "Student Present" five times using a loop inside the function.
    cout <<"\nShow Student Attendence\n";

    showAttendence();

    return  0;
    }
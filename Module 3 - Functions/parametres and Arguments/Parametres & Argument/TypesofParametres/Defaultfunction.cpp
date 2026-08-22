// Default Parametres and Arguments

# include<iostream>
    using namespace std;

    void greet(string name = "Student") // default Parametres = Student
    {
    cout << "Hello " << name << endl;
    }

    // Multiple Default Parameters
    void student(string name = "Unknown", int age = 18) // default Parametres = Unknown,18
    {
    cout << name << " " << age << endl;
    }

    /*
    void students(int age = 18, string name)
    {
        cout << name << " " << age;
    }
    SyntaxError: parameter without a default follows parameter with a default
    */

    int main(){

        greet("rahul"); 
        greet(); // default Argument

        student(); // with 2 default Argument
        student("Rahul"); // with 1 default Argument
        student("Rahul", 20); // with No default Argument
        
        return  0;
    }
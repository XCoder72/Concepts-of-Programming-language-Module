# include<iostream>
    using namespace std;

    void greet(string name)    // name = parameter
    {
        cout << "\nSingle Parametres\n"<<endl;
        cout << "Hello " << name;
    }     

    double calculateBill(double price, int quantity, double discount)
    // Multiple Parametres 
    {
        cout << "\nMultiple Parametres\n"<<endl;
        return price * quantity - discount;
    }

    void Student(string name, int age, bool passed)
    // Multiple Parametres 
    {
        cout << "\nMultiple Parametres\n"<<endl;
        cout << name << " " << age << " " << passed;;
    }

    int main(){

        greet("Admin\n"); // "Amin" = argument
        
        calculateBill(100,1,12); // Multiple Agruments
        cout << calculateBill(100,1,10); // Multiple Agruments

        Student("rahul",19,true);
    

        return  0;
    }
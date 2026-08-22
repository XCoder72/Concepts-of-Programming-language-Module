/* An if statement checks a condition. 
If the condition evaluates to True, 
the associated block of code is executed. */

/* if(condition)
{
    statement;
}
    */

    # include<iostream>
    using namespace std;

    int main(){
        int age1 = 20;
        if(age1 >= 18){ // condition is true
            cout << "Eligible for Voting "<<endl;
        }

    int age2 = 15;
        if(age2 >= 18){ // condition is false
            cout << "Eligible for Voting "<<endl;
        }

    int age3 = 15;
        if(age3 >= 18){ // MUltiple Statement
            cout << "Eligible for Voting "<<endl;
            cout << "You Can Votes";
        
        }

        return 0;
    }
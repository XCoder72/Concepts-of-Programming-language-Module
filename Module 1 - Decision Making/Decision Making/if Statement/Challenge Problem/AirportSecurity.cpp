/*
Airport Security
Conditions:
Valid Passport
Valid Visa
Security Clearance
If all conditions are satisfied:
Boarding Allowed
Otherwise:
Boarding Denied
*/

# include<iostream>
    using namespace std;

    int main(){
        bool validPass = true;
        bool validVisa = true;
        bool securityClear = true;

        if (validPass){
            if(validVisa){
                if(securityClear){
                    cout <<"Boarding Allowed\n";
                }
            }
        }

        else{
            cout <<"Boarding Denied";
        }

        // Another way using And Operator
        
        if(validPass && validPass && securityClear){
            cout <<"Boarding Allowed\n";
        }
        else{
            cout <<"Boarding Denied";
        }
        return  0;
    }
// Multiple return Statements
# include<iostream>
    using namespace std;

    string checkNumber(int n)
    {
    if(n > 0)
        return "Positive";
    else if(n < 0)
        return "Negative";
    else
        return "Zero";
    }

    int main(){
        
        cout <<checkNumber(10)<<endl;
        cout <<checkNumber(-1)<<endl;
        cout <<checkNumber(0)<<endl;

        return  0;
    }
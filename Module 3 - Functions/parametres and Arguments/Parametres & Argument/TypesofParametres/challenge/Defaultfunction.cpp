// Create a calculateSalary() function:
# include<iostream>
    using namespace std;

    float calculateSalary(float basicSalary,float bonus =0,float tax = 0){
         return basicSalary + bonus - tax ; // C++ convention usually uses camelCase for local variables/parameters:
    }

    int main(){
        
     cout <<calculateSalary(50000)<<endl;
     cout <<calculateSalary(50000,5000)<<endl;
     cout <<calculateSalary(100000,10000,20000)<<endl;

        return  0;
    }
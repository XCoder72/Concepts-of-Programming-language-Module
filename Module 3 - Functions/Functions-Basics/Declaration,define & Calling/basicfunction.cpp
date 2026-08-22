# include<iostream>
using namespace std;

// Function Declaration
int add(int a,int b);

int main(){
    add(5,2); //Call function
    return 0;
}

// Function Definition
int add(int a,int b){ 
    cout<<a<<"+"<<b<<"="<<a+b;
}
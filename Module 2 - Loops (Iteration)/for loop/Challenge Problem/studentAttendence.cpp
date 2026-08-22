/*Student Attendance
There are 10 students.
Print:
Student 1 Present

Student 2 Present

...

Student 10 Present
using a for loop.*/

#include<iostream>
using namespace std;

int main(){
    cout <<"\nStudent Attendence\n";
    for(int i=1;i<=10;i++){
        cout << "student "<<i<<" present\n";
    }

    cout <<"\nPrint only even-numbered students:\n";
    for(int i=2;i<=10;i+=2){
        cout << "student "<<i<<" present\n";
    }

    cout <<"\nPrint only odd-numbered students:\n";
    int j=0;
    for(int i=1;i<=10;i+=2){
        cout << "student "<<i<<" present\n";
    }
return 0;
}
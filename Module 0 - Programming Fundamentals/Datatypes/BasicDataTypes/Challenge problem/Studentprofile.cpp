// Design a student profile using the appropriate data types in C++.

#include<iostream>
using namespace std;

int main() {
    string Studentid = "S12345";
    string StudentName = "Rahul verma";
    string studentgender = "Male";
    int studentAge = 20;
    int studentnumber = 1234567890;
    string studentaddress = "123 Main Street";
    float studentCGPA = 3.8;
    bool studentisEnrolled = true;

    cout << "\nStudent Profile:" << endl;
    cout << "ID: " << Studentid << endl;
    cout << "Name: " << StudentName << endl;
    cout << "Gender: " << studentgender << endl;
    cout << "Age: " << studentAge << endl;
    cout << "Phone: " << studentnumber << endl;
    cout << "Address: " << studentaddress << endl;
    cout << "CGPA: " << studentCGPA << endl;
    cout << "Enrolled: " << (studentisEnrolled ? "Yes" : "No") << endl;

    return 0;
}
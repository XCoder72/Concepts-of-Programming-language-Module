/*
A map stores data as key → value pairs. 

Key Concepts
- Every key should be unique.
- A key is used to find its associated value.
- Values can be duplicated.
- Useful for fast lookup by key.
- dict / unordered_map are hash-based; C++ map keeps keys sorted.

operation 
Create	      map<> / unordered_map<>	
Access	      m[key]	
Add	          m[key]=value	
Update	      m[key]=value	
Delete	      m.erase(key)	
Search key	  find()
Size	      size()
Clear	      m.clear()	
Traverse	  range-based for
*/

#include <iostream>
#include <map>
using namespace std;

int main()
{
    // Create a Dictionary
    cout << "Create A Dictionary" << endl;

    map<string, string> student;

    student["name"] = "Rahul";
    student["age"] = "20";
    student["marks"] = "85";

    cout << endl;
    cout << "Dictionary:" << endl;

    for(const auto& entry : student)
    {
        cout << entry.first << " : " << entry.second << endl;
    }

    cout << endl;

    // Accessing A Value
    cout << "Accessing A Value" << endl;

    cout << student["name"] << endl;
    cout << student["age"] << endl;
    cout << student["marks"] << endl;

    cout << endl;

    // Adding / Updating
    cout << "Adding / Updating" << endl;

    student["city"] = "Bhopal";       // Adding
    student["marks"] = "90";          // Updating
    student["address"] = "21 street"; // Adding

    for(const auto& entry : student)
    {
        cout << entry.first << " : " << entry.second << endl;
    }

    cout << endl;

    // Delete
    cout << "Delete" << endl;

    student.erase("address");

    for(const auto& entry : student)
    {
        cout << entry.first << " : " << entry.second << endl;
    }

    cout << endl;

    // Check Whether Key Exists
    cout << "Check Whether Key Exists" << endl;

    if(student.find("name") != student.end())
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;

    cout << endl;

    // Size of Dictionary
    cout << "Size of Dictionary" << endl;
    cout << student.size() << endl;

    cout << endl;

    // Clear
    cout << "Clear" << endl;

    student.clear();

    cout << "Size after clear: " << student.size() << endl;

    return 0;
}
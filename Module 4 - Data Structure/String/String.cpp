/*
Common String Operations
Operation
Length - string.length()
Access - string[i]
Concatenate - string1 + string2
Character traversal	- for(char ch : string)
Substring -	s.substr(start, length)
Find - string.find(x)
Convert case -	=tolower()/toupper()
*/

#include <iostream>
using namespace std;

int main()
{
  string str = "Hello";

// Accessing characters in a string
cout << "Accessing characters in a string: " << endl;
cout << str[0] << endl; // Output: H

// upating characters in a string - C++ string is mutable
cout << "\nupdating characters in a string: " << endl;
str[0] = 'h';
cout << str << endl; // Output: hello

// TRAVERSING A STRING
cout << "\nTRAVERSING A STRING: " << endl;
for(char ch : str)
{
    cout << ch <<endl;
}
cout << endl;

// sting length
cout << "\nstring length: " << endl;
cout << str.length() << endl;

// concatenating strings
cout << "\nconcatenating strings: " << endl;
string str2 = " World!";
cout << str + str2 << endl;

// substring
cout << "\nsubstring: " << endl;
cout << str.substr(1, 3) << endl; // Output: ell

// finding a substring
cout << "\nfinding a substring: " << endl;
cout << str.find("lo") << endl; // Output: 3

// converting case
cout << "\nconverting case: " << endl;
cout << "Lowercase: " << tolower(str[0]) << endl; // Output: h
cout << "Uppercase: " << toupper(str[0]) << endl; // Output: H

    return 0;
}
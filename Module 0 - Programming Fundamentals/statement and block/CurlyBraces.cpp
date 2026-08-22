// A statement is a single instruction given to the computer.

# include <iostream> // header file for input and output stream objects
using namespace std; // use the standard namespace to avoid prefixing std:: before standard library names

int main() {  // use of main() - The compiler needs to know where execution begins.

    cout << "statement" << endl;

    // A block is a group of statements enclosed in curly braces.
    if(true)
    {
    cout << "Hello";
    cout << "World";
}

return 0;
 //Indicates that the program finished successfully and returns control to the operating system.
}

/* Note: In modern C++, reaching the end of main() without return 0;
 is also valid, but writing it explicitly is good practice for beginners. */
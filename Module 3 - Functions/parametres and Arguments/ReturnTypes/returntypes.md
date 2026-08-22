* Definition:
A return type tells what kind of value a function returns.
This is particularly explicit in C++.


* Common C++ return types:
int       → integer
double    → decimal number
char      → character
string    → text
bool      → true/false
void      → returns nothing

* return
return sends a value from the function back to the place where the function was called.

* Function With vs Without Return

Without Return
def greet():
    print("Hello")
The function performs an action.

With Return
def add(a, b):
    return a + b
The function produces a value.

Think:
print()  → Show something
return   → Give something back

* Multiple return Statements
A function can have multiple possible return statements.
The function executes only one return path for a particular call.

* Practice Problem

Easy
Create square(n) that returns the square.
Create isEven(n) that returns True/False.

Medium
Create maximum(a, b) that returns the larger number.
Create calculateArea(length, width).

Challenge
Create:
calculateGrade(marks)
Return:
A → 90+
B → 80–89
C → 70–79
D → 60–69
F → below 60
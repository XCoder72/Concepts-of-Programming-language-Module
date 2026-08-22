* Definition
A reference is another name (alias) for an existing variable. It does not create a separate variable or a separate copy of the data.
Original Variable
      ↑
      │ same data
      ↓
  Reference

* Reference vs Normal Variable
This difference is important.

Normal variable
int a = 10;
int b = a;
b = 20;
Now:
a = 10
b = 20
b received a copy.

Reference
int a = 10;
int &b = a;
b = 20;
Now:
a = 20
b = 20
b is an alias for a.

* A Reference Must Be Initialized

int number = 10;
int &ref = number;

* A Reference Cannot Be Reseated
Consider:
int a = 10;
int b = 20;
int &ref = a;
ref = b;

A beginner may think:
ref → b
But that's not what happens.
ref remains a reference to a.

Instead:
a = 20
b = 20
ref → a

Because:
ref = b;
means:
Copy the value of b into the variable referred to by ref.
It does not change what ref refers to.

* const Reference
A const reference can refer to an object without allowing modification through that reference.

int number = 10;
const int &ref = number;

This is allowed:
cout << ref;

But:
ref = 20;   // ❌ Error
The reference provides read-only access.

* Important Rules
Rule 1
int &ref = number;
ref becomes an alias of number.
Rule 2
A reference must be initialized.
Rule 3
Changing the reference changes the original variable.
Rule 4
A reference cannot be reseated like a pointer.
Rule 5
const reference prevents modification through that reference.

* Practice Problems

Easy
1. Create an integer and a reference to it. Change the value through the reference.
2. Create two variables and demonstrate the difference between a copy and a reference.

Medium
3. Create:
void doubleValue(int &x)
that doubles the original number.
4. Create a function that swaps two integers using references.

Challenge
Create:
void applyDiscount(double &price, double discount)
The function should modify the original price.
Example:
Original price: 1000
Discount: 20%

Final price: 800
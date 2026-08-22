""" Pass by value means a function receives a value to work with, 
rather than directly modifying the caller's original variable. 

Python does not use C++-style pass-by-value or pass-by-reference terminology in exactly the same way.
Python uses object references, often described as pass-by-object-reference / call-by-sharing.
"""

def change(x):
    x = 100
    print("x:", x)

num = 10

print("num:", num)

change(num)

print("num:", num)

"""
Why?
num ───────→ 10
x ─────────→ 10
Inside the function:
x = 100
makes x refer to a different object.
It does not change what num refers to.

x is a local parameter referring to the same object initially, 
but rebinding x doesn't rebind the caller's variable.
"""
"""
Python don't needed returntypes it automatically decide type of Function.
To print return as an output 
* Print(functioncall)
"""

def get_age():
    return 20

def get_price():
    return 99.50

def get_grade():
    return 'A'

def get_name():
    return "X-Creator"

def is_passed():
    return True

def show_message():
    print("Welcome to Python Functions")


age = get_age()
price = get_price()
grade = get_grade()
name = get_name()
passed = is_passed()

show_message()

print("Name:", name)
print("Age:", age)
print("Price:", price)
print("Grade:", grade)
print("Passed:", passed)
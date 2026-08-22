# Default Parametres and Arguments

def greet(name="Student"): # default Parametres = Student
    print("Hello", name)

greet("Rahul")
greet() # default Argument

# Multiple Default Parameters

def student(name="Unknown", age=18): # default Parametres = Unknown,18
    print(name, age)

student() # with 2 default Argument
student("Rahul") # with 1 default Argument
student("Rahul", 20) # with No default Argument

# ❌ Invalid
"""
def student(age=18, name):
    print(name, age)
    SyntaxError: parameter without a default follows parameter with a default
    """
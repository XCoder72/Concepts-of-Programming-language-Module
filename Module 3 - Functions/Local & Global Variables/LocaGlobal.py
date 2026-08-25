Age = 0 # Global variable - Age exists outside of show().

def show():
    age = 20   # Local variable - age exists inside show().
    global Age  #global Keyword tells Python Use the existing global variable,rather than creating a local variable.
    Age = age
    print(age)

show()
print(Age) # Output: 20. The global variable Age is updated to the value of the local variable age.

"""
def show():
    age = 20

show()

print(age)    # NameError: name 'age' is not defined. 
The variable age is local to the function show() and cannot be accessed outside of it.    
"""
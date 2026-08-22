def greet(name):       # name = parameter
    print("Hello", name)

greet("Admin")         # "Admin" = argument

def calculate_bill(price, quantity, discount):
    # Multiple Parametres
    return price * quantity - discount

print(calculate_bill(100,1,10)) # multiple Parametres

""" Data Types
      │
      ├── Integer - Stores whole numbers.
      ├── Float / Double - Stores decimal numbers.
      ├── Character - Stores a single character.
      ├── String - Stores a sequence of characters.
      └── Boolean - Stores either True or False """

# python treats characters as strings, so there is no separate character data type in Python.

var1 = 10
var2 = 10.5
var3 = 'A'
var4 = "Hello"
var5 = True

print("Integer:", var1)
print("Float:", var2)
print("Character:", var3)
print("String:", var4)
print("Boolean:", var5)

# python is Dynamic Typing Language, so we can change the type of variable at runtime

var1 = "Hello"  # Now var1 is a string
print("Var1 is Updated to String:", var1)
"""
Common String Operations
Length - len(string)
Access - string[i]
Concatenate - string1 + string2
Character traversal - for ch in string
Substring - string[start:end]
Find - string.find(x)
Convert case - string.upper()/string.lower()
"""
str = "hello"

# Traversal
print("Traversal of String elements: ")
for ch in str:
    print(ch)

print()

# Accessing an element
print("Accessing an element at index 1: ")
print(str[1])  # Output: e
print()

# updating an element
# Strings are immutable in Python, so we cannot update an element directly.

# String length
print("Length of the string: ")
print(len(str))  # Output: 5
print()

# Concatenation
print("Concatenation of strings: ")
str2 = "world"
print(str + " " + str2)  # Output: hello world
print()

# Substring
print("Substring of the string from index 1 to 4: ")
print(str[1:4])  # Output: ell
print()

# Find
print("Finding the index of character 'l': ")
print(str.find('l'))  # Output: 2
print()

# Convert case
print("Convert string to uppercase: ")
print(str.upper())  # Output: HELLO
print(str.lower())  # Output: hello
print()
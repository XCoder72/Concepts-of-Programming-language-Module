""" Syntax:
for i in range(rows):
    for j in range(columns):
        statement
"""
# Example 1 – Print Coordinates
print("Example 1 -- Print Coordinates")
for i in range(1, 4):
    for j in range(1, 4):
        print("(",i,",",j,")")

# Example 2 – Rectangle Pattern
print("Example 2 -- Rectangle Pattern")
for i in range(3):
    for j in range(5):
        print("*", end="")
    print()

# Example 3 – Number Pattern
print("Example 3 -- Number Pattern")
for i in range(3):
    for j in range(1, 6):
        print(j, end="")
    print()
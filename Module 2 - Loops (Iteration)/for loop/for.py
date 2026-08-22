"""
How range() Works (Python)
range() generates a sequence of numbers.

Syntax
range(start, stop, step)
start → First number (default = 0)
stop → Last number is not included
step → Increment (default = 1)
"""

# Example 1 – Print 1 to 5
print("Example 1 -- Print 1 to 5")
for i in range(1, 6):
    print(i)

# Example 2 – Even Numbers
print("Example 2 -- Even Numbers")
for i in range(2, 11, 2):
    print(i)

# Example 3 – Countdown
print("Example 3 -- Countdown")
for i in range(5, 0, -1):
    print(i)

# Example 4 – Multiplication Table
print("Example 4 -- Multiplication Table")
num = 5
for i in range(1, 11):
    print(num, "x", i, "=", num * i)


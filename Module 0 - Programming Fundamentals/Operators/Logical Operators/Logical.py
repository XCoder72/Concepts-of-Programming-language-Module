"""Logical Operators
Used to combine multiple conditions.
Operator
AND	and	 - both conditions must be True
OR	or	- only one condition must be True
NOT	not	- negates the condition
"""

a = 10
b = 20
print(a > 5 and b < 25)  # Output: True (both conditions are True)
print(a > 15 or b < 25)  # Output: True (one condition is True)
print(not(a > 15))  # Output: True (negates the condition)

""" An if statement checks a condition. 
If the condition evaluates to True, 
the associated block of code is executed. */

if condition:
    statement
"""

age = 20 

if age >= 18: # condition is true
    print("Eligible to Vote")

age = 15

if age >= 18: # condition is false
    print("Eligible to Vote")

if age >= 18: # Multiple Statements
    print("Eligible")
    print("You can vote")
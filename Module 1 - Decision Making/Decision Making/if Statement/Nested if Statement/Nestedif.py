""" A nested if is an if statement inside another if statement, 
used for multiple dependent decisions. """

"""
if condition1:
    if condition2:
        statement
"""

# Example 1 - College Admission
age = 18
marks = 75

if age >= 17:
    if marks >= 60:
        print("Admission Granted")

print("-------")

# Example 2 - ATM System
pinCorrect = True
balance = 5000

if pinCorrect:
    if balance >= 500:
        print("Transaction Successful")
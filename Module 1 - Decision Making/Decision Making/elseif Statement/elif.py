"""
elif is used to test multiple conditions sequentially. 
Only the first true condition is executed.
"""
"""
if condition1:
    statement1
elif condition2:
    statement2
elif condition3:
    statement3
else:
    statement4
"""

marks = float(input("Enter Marks Obtained :- "))

if marks >= 90:
    print("Grade A")
elif marks >= 80:
    print("Grade B")
elif marks >= 70:
    print("Grade C")
elif marks >= 60:
    print("Grade D")
else:
    print("Grade F")
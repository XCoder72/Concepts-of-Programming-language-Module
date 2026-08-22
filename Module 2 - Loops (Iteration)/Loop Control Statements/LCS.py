""" Why Do We Need Loop Control Statements?
Normally, a loop executes all iterations.
Sometimes we need to:
Stop the loop immediately.
Skip one iteration.
Leave a placeholder for future code (Python).
That's why loop control statements exist."""

"""
Types of Loop Control Statements
Statement
break - Eexits the loop immediately, 
        even if the loop condition is still true.
continue - skips the remaining statements in the current iteration 
           and starts the next iteration.
pass - Placeholder (does nothing)
"""
# break
for i in range(1, 11):
    if i == 5:
        break # stop when i=5
    print(i)

print()

# continue
for i in range(1, 6):
    if i == 3:
        continue # skip iteration  if i = 3
    print(i)
print()

# Pass
for i in range(5):
    if i == 3:
        pass # left for Future body
    print(i)


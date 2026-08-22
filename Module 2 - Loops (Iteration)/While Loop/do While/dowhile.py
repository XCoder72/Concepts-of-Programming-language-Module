"""Python Equivalent
   Python doesn't have do-while.
   Use:
   while True:
        statement

    if not condition:
        break
"""

i = 1

while True:
    print(i)
    i += 1

    if i > 5:
        break
print()


# ATM Menu
print("ATM Menu")

while True:
    print("1. Balance")
    print("2. Deposit")
    print("3. Exit")

    choice = int(input("Enter Choice: "))

    if choice == 3:
        break

print("Thank You!")
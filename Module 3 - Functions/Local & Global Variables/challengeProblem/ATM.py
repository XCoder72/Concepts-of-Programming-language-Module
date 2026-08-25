"""
Create a simple ATM program where:
balance = 5000
Functions:
deposit(amount)
withdraw(amount)
showBalance()
"""

balance = 5000  # Global variable to store the balance

def deposit(amount):
    global balance
    balance += amount
    print("Deposited: ", amount)
    print("New Balance: ", balance)

def withdraw(amount):
    global balance
    if amount > balance:
        print("Insufficient Balance!")
    else:
        balance -= amount
        print("Withdrawn: ", amount)
        print("New Balance: ", balance)

def showBalance():
    print("Current Balance: ", balance)

while True:
    print("\nATM Menu:")
    print("1. Deposit")
    print("2. Withdraw")
    print("3. Show Balance")
    print("4. Exit")
    
    choice = input("Enter your choice (1-4): ")
    
    if choice == '1':
        amount = float(input("Enter amount to deposit: "))
        deposit(amount)
    elif choice == '2':
        amount = float(input("Enter amount to withdraw: "))
        withdraw(amount)
    elif choice == '3':
        showBalance()
    elif choice == '4':
        print("Exiting ATM. Thank you!")
        break
    else:
        print("Invalid choice! Please try again.")
    
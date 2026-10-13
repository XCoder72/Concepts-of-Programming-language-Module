"""
Customer Service Queue
Create a program that:
1. Accepts the names of three customers.
2. Adds them to a queue in arrival order.
3. Serves each customer one by one.
4. Prints the name of each customer when served.
Expected output for Rahul, Priya, and Aman:
"""

from collections import deque

# Creating Queue
q = deque()

totalCustomers = int(input("\nTotal customers: "))
print()

# Adding customers to Queue
for i in range(totalCustomers):
    customer = input(f"Enter the name of customer {i + 1}: ")

    q.append(customer)

    print("Customer added to queue:", customer)
    print()

# Serving customers in FIFO order
print("\nServing Customers:")

while q:
    print("Serving customer:", q.popleft())
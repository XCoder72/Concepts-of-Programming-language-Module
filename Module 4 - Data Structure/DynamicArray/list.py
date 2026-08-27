""" Python's not have built-in array so we use list which is dynamic and can hold different object types, 
so it is not exactly the same as a C++ fixed array.
Python lists can grow dynamically.

keyword
* len() - returns the number of items in a list
* append() - adds an item to the end of the list
* insert() - adds an item at the specified index
* delete() - removes an item at the specified index
* pop() - removes and returns the item at the specified index

Key Concepts
list can store different types of data (int, float, string, etc.) in a single list
Lists are mutable, meaning you can change their content without changing their identity.
Lists are ordered, meaning that the items have a defined order, and that order will not change
Lists use indexing starting from 0.
Lists can grow dynamically.
Access by index is typically O(1).
Adding at the end is amortized O(1).
Inserting/deleting in the middle requires shifting elements → O(n).
"""

arr = [10, 20, 30, 40, 50]  # list of size 5

'''
Index:   0   1   2   3   4
         ↓   ↓   ↓   ↓   ↓
Values:  10  20  30  40  50
'''
# Operation on List
# Traversal
print("Traversal of List elements: ")
for x in arr:
    print(x)

print()

# Accessing an element
print("Accessing an element at index 2: ")
print(arr[2])  # Output: 30
print()

# Updating an element
print("Updating an element at index 3: ")
arr[3] = 100
print(arr[3])  # Output: 100
print()

# searching an element
print("Searching for an element (30): ")
target = 30
for i in range(len(arr)):
    if arr[i] == target:
        print("Found at index", i)
        break

print()

# insert an element
print("Inserting an elemen at index 2: ")
arr.insert(2, 25)
print(arr)
print()

# delete an element
print("Deleting an element at index 2: ")
del arr[2]
print(arr)

# add an element at the end
print("Adding an element at the end: ")
arr.append(60)
print(arr)
print()

# removing an element at a specific index
print("Removing an element at index 1: ")
arr.pop(1)
print(arr)

# list with different data types
mixed_list = [1, "Hello", 3.14, True]
print("List with different data types: ", mixed_list)

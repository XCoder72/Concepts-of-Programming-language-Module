""" Python's not have built-in array so we use list which is dynamic and can hold different object types, 
so it is not exactly the same as a C++ fixed array.
Python lists can grow dynamically.

keyword
len() - returns the number of items in a list
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
print("Inserting an element (25) at index 2: ")
arr.insert(2, 25)
print(arr)
print()

# delete an element
print("Deleting an element at index 2: ")
del arr[2]
print(arr)

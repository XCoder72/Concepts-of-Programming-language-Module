"""
Python Set are hash-based data structures that store unique elements. 
They are unordered collections, meaning that the elements do not have a specific order, 
and they do not allow duplicate values. 
Sets are mutable, which means you can add or remove elements after the set has been created.

operation on sets include:
- Adding elements:
* add() - Adds a single element to the set.
* update() - Adds multiple elements to the set.
- Removing elements:
* remove() - Removes a specific element from the set (raises KeyError if not found).
* discard() - Removes a specific element from the set (does not raise an error if not found).
- Checking membership:
* in - Checks if an element is in the set.
* not in - Checks if an element is not in the set.
- Clearing all elements:
* clear() - Removes all elements from the set.
- Removing an arbitrary element:
* pop() - Removes and returns an arbitrary element from the set (raises KeyError if the set is empty).
- Set operations:
* union()/set1|set2 - Returns a set with the union of two sets.
* intersection()/set1&set2 - Returns a set with the intersection of two sets.
* difference()/set1-set2 - Returns a set with the difference of two sets.
* symmetric_difference()/set1^set2 - Returns a set with the symmetric difference of two sets.
"""

set1 = {1, 2, 3, 4, 5, 5} # Create a set with unique elements
print (set1) # Output: {1, 2, 3, 4, 5} - Duplicate '5' is removed

# traversing a set
print("Traversing the set:")
for element in set1:
    print(element)
print()

# Adding elements to a set
print("Adding elements to the set:")
set1.add(6) # Add a single element
print(set1)
print()

# Adding multiple elements to a set
print("After adding multiple elements:")
set1.update([7, 8, 9]) # Add multiple elements using update()
print(set1)
print()

# Removing elements from a set
print("Removing elements from the set:")
set1.remove(3) # Remove an element (raises KeyError if not found)
set1.discard(10) # Remove an element (does not raise an error if not found)
print(set1)
print()

#find elements in a set
print("Finding elements in the set:")
if 4 in set1:
    print("4 is present in the set")
print()

# size of a set
print("Size of the set:")
print(len(set1)) # Output: 0 - The set is empty after clearing
print()

# Clearing all elements from a set
print("Clearing all elements from the set:")
set1.clear() # Remove all elements from the set
print(set1)
print()

# empty set check
print("Checking if the set is empty:") 
print(len(set1) == 0) # Output: True - The set is empty
print()

# set operations
setA = {1, 2, 3, 4}
setB = {3, 4, 5, 6}

print("Set A:", setA)
print("Set B:", setB)

# Union of two sets
union_set = setA.union(setB)
print("Union of Set A and Set B:", union_set)

# Intersection of two sets
intersection_set = setA.intersection(setB)
print("Intersection of Set A and Set B:", intersection_set)

# Difference of two sets
difference_set = setA.difference(setB)
print("Difference of Set A and Set B:", difference_set)

# Symmetric difference of two sets
symmetric_difference_set = setA.symmetric_difference(setB)
print("Symmetric difference of Set A and Set B:", symmetric_difference_set)

print("Union:", setA | setB)
print("Intersection:", setA & setB)
print("Difference:", setA - setB)
print("Symmetric Difference:", setA ^ setB)
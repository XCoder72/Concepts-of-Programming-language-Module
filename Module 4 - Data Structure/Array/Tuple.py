"""
A tuple/fixed collection stores multiple values in an ordered structure where the collection's size is not meant to change.

Key Concepts
Ordered collection.
Index starts from 0.
Fixed number of elements.
Python tuple is immutable.(can not be changed after creation)
C++ std::array has a fixed size, but its elements can be modified.

When Should You Use It?
* Use a fixed collection when the number of elements is known.
Examples:
Days of week      → 7
Months             → 12
RGB values         → 3
Coordinates (x,y)  → 2
"""
tuple = (10, 20, 30, 40, 50)  # tuple of size 5

# traversal an tuple
print("Traversal of Tuple elements: ")
for x in tuple:
    print(x)
print()

# Acessing an element
print("Accessing an element at index 2: ")
print(tuple[2])

# updating an element
# tuple[2] = 100  # This will raise an error because tuples are immutable



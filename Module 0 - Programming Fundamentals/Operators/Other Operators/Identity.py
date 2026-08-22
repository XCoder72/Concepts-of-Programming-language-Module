""" Identity Operator (Python Only)
Checks whether two variables refer to the same object.
Operator
is	Same object
is not	Different object """

a = [1, 2, 3]
b = a

print(a is b)  # True, because b refers to the same object as a
print(a is not b)  # False, because b refers to the same object as a
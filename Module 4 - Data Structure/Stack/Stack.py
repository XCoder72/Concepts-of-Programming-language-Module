"""
Python does not have a built-in Stack class normally used for basic stack operations. 
A list can work as a stack.

Syntax:
stack.append(x)  # Push an element x onto stack
stack.pop()      # Pop the top element from stack
stack[-1]        # Peek/Top element
len(stack)       # Size of the stack
"""
stack = [] # Initialize an empty stack

stack.append(10) # Push an element 10 onto stack
stack.append(20) # Push an element 20 onto stack
stack.append(30) # Push an element 30 onto stack

# Print the top element of the stack
print("Accessing the top element of the stack")
print("Top:", stack[-1])

print("Popping the top element of the stack")
stack.pop()
print("New Top:", stack[-1])


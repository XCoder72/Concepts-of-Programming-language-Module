""" Print the following pattern:
-----------
*****
*****
*****
*****
*****

-----------
*
**
***
****
*****

-----------
*****
****
***
**
*

-----------
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 

-----------
1 2 3 4 5 
1 2 3 4 
1 2 3 
1 2 
1 

-----------
1 
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5 

-----------
1 1 1 1 1 
2 2 2 2 
3 3 3 
4 4 
5 
"""

n = int(input("Enter N Values : "))
print("------------")
print("Rectangle")
for i in range(n):
    for j in range(n):
        print("*", end="") # end help to stay at same line until j Execute
    print() # after j execute an line it shift to newline

print("------------")
print("Increasing Triangle")
for i in range(n):
    for j in range(i+1):
        print("*", end="")
    print()

print("------------")
print("Decreasing Triangle")
for i in range(n):
    for j in range(n-i):
        print("*", end="")
    print()

print("------------")
print("Increasing Numbers")
for i in range(n):
    for j in range(i+1):
        print(j+1, end="")
    print()   

print("------------")
print("Decreasing Numbers")
for i in range(n):
    for j in range(n-i):
        print(j+1, end="")
    print()

print("------------")
print("Same Number Per Row (Increasing)")
for i in range(n):
    for j in range(i+1):
        print(i+1, end="")
    print()

print("------------")
print("Same Number Per Row (Decreasing)")
for i in range(n):
    for j in range(n-i):
        print(i+1, end="")
    print() 
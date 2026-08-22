# Build a simple calculator supporting +, -, *, /, and %.

a = float(input("Enter first number: "))
b = float(input("Enter second number: "))

print(a,"+",b,":- ",a+b)
print(a,"-",b,":- ",a-b)
print(a,"*",b,":- ",a*b)
if b != 0:
    print(a,"/",b,":- ",a/b)
    print(a,"%",b,":- ",a%b)
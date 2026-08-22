""" Explicit Type Conversion (Manual Type Conversion)
The programmer explicitly converts the data type."""

age = int("20")
price = float("99.5")
age = str(20)
flag = bool(1)

print(age)
print(price)
print(age)
print(flag)

""" type casting is important in python 
because input() always returns string """

# age = input("Age: ")
# print(age + 10) - TypeError: can only concatenate str (not "int") to str

age = int(input("Age: "))

print(age + 10)


a = input("Enter a number: ")
print(a)
print(type(a)) # default type of input is string


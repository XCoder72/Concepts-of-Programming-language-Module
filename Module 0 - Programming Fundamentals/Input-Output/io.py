#Input - information entered by the user for processing.
#Output - result displayed to the user after processing the input.
#The print() function displays data on the screen.
#The input() function allows the user to enter data from the keyboard.
#The input() function returns the data entered by the user as a string.

num1 = input("Enter first number: ")
num2 = input("Enter second number: ")
sum = int(num1) + int(num2)
print("The sum of", num1, "and", num2, "is:", sum)

#input() always returns a string.
# for specific data type input
num3 = int(input("Enter first number: "))
num4 = int(input("Enter second number: "))
sum = num3 + num4
print("The sum of", num3, "and", num4, "is:", sum)
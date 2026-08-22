# Calculator 

Num1 = float(input("Enter Number: "))
Num2 = float(input("Enter Number: "))
operator = input("Enter Operator[+,-,*,/,%]: ")

match operator:
    case "+":
        print(Num1+Num2)
    case "-":
        print(Num1-Num2)
    case "*":
        print(Num1*Num2)
    case "/":
        print(Num1/Num2)
    case "%":
        print(Num1%Num2)
    case _:
        print("Invalid Operator")


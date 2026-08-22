"""match makes the code cleaner 
when comparing one variable against fixed values."""

"""
match expression:
    case value1:
        statement

    case value2:
        statement

    case _:
        statement
"""

# Example - Day of Week
day = int(input("Enter Day Number (1-7): "))

match day:
    case 1:
        print("Monday")
    case 2:
        print("Tuesday")
    case 3:
        print("Wednesday")
    case 4:
        print("Thursday")
    case 5:
        print("Friday")
    case 6:
        print("Saturday")
    case 7:
        print("Sunday")
    case _:
        print("Invalid Day")

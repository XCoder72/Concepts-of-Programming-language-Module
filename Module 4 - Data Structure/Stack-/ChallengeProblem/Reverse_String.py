string = input("Enter String: ")

Reverse_string = []
ReverseString = ""


def reverse_string(string):

    # Push characters into stack
    for i in range(len(string)):
        Reverse_string.append(string[i])

    # Pop characters from stack
    global ReverseString

    while Reverse_string:
        ReverseString += Reverse_string.pop()


reverse_string(string)

print("Reverse String:", ReverseString)
    
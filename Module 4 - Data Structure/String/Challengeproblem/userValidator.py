"""Create a Username Validator that checks:
Length >= 5
No spaces
Output:
Valid Username
or
Invalid Username"""

def validate_username(username):
    if len(username) < 5:
        return "Invalid Username"
    if ' ' in username:
        return "Invalid Username"
    return "Valid Username"

string = input("Enter a username: ")
result = validate_username(string)
print(result)
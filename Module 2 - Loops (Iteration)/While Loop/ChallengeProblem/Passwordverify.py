""" Password Verification
Keep asking the user for a password until they enter:
admin123
Then display:
Access Granted """

newpassword = input("Create Password: ")

attempts = 0

while attempts < 3:
    password = input("Enter Password: ")

    if password == newpassword:
        print("Access Granted")
        break

    print("Password Incorrect.")
    attempts += 1

if attempts == 3:
    print("Access Denied")
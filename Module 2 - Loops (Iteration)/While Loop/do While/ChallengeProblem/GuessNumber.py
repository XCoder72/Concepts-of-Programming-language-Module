"""Guess the Secret Number
Secret number = x
Keep asking the user to enter a number.
If the number is incorrect:
Wrong Guess!
If correct:
Correct Guess!
The program must stop after the correct guess.
"""

print("Welcome to Guessing Number Game")

Number = int(input("Player 1 Enter Number To Guess: "))

attempts = 0

while True:
    Guessnumber = int(input("Player 2 Enter Guess Number:"))

    if Guessnumber == Number:
        print("Correct Guess!")
        print("Player 2 Wins")
        break
    else :
        print("Wrong Guess!")

    attempts =+ 1

    if attempts == 3:
        print("Player 1 Wins")
        break
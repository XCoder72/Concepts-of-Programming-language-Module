* Definition:
A while loop is a condition-controlled loop that 
continues executing until its condition becomes false.

* Why Do We Need a while Loop?
Use a while loop when the number of repetitions is not known in advance.

Examples:
Keep asking for a password until it is correct.
ATM menu until the user chooses Exit.
Download progress.
Game running until the player quits.

* Components:
Every while loop has four parts.
Initialization
↓
Condition
↓
Body
↓
Update

* Flow:
        Start
          │
          ▼
    Initialization
          │
          ▼
   Check Condition
      │       │
    True    False
      │        │
      ▼        ▼
 Execute Body  End
      │
      ▼
    Update
      │
      └──────────► Check Condition Again

* Practice Problem:
Easy
Print numbers from 1 to 10.
Print numbers from 10 to 1.
Print even numbers from 2 to 20.

Medium
Find the sum of the first N natural numbers.
Print the multiplication table of a given number.

Challenge
Password Verification
Keep asking the user for a password until they enter:
admin123
Then display:
Access Granted

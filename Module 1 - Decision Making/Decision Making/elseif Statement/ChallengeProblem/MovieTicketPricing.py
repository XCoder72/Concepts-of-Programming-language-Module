"""
Movie Ticket Pricing
Rules:
Age	Ticket Type
< 5	Free
5–17	Child Ticket
18–59	Adult Ticket
≥ 60	Senior Citizen Ticket
Print the correct ticket category.
"""

Age = int(input("Enter Your Age :- "))

if Age<5:
    ticketType = "Free"
elif 5<Age<17:
    ticketType = "Child Ticket"
elif 18<Age<59:
    ticketType = "Adult Ticket"
else :
    ticketType = "Senior Citizen Ticket"

print("Ticket Type :- ",ticketType)

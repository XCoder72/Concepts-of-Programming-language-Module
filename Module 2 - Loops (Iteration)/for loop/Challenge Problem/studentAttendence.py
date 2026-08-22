"""Student Attendance
There are 10 students.
Print:
Student 1 Present

Student 2 Present

...

Student 10 Present
using a for loop."""

print("Student Attendence")
for i in range(1,11):
    print("student ",i," present")

print("Print only even-numbered students:")
for i in range(2,11,2):
    print("student ",i," present")

print("Print only odd-numbered student")
for i in range(1,11,2):
    print("student ",i," present")
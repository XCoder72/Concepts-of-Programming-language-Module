""" Syntax:
while condition:
    statement
"""

# Example 1- print Numbers from 1 to 5
print("Example 1- print Numbers from 1 to 5")

i = 1 #initialization
while i <= 5: #condition
    print(i) #body
    i += 1 #update

"""
Iteration	i	Condition (i<=5)	Output	i After Update
1	        1	   True	              1	         2
2	        2	   True	              2	         3
3	        3	   True	              3	         4
4	        4	   True	              4	         5
5	        5	   True 	          5 	     6
6	        6	   False	         Stop	     -
"""

# Example 2 - Sum of first 5 Numbers

print("Example 2 - Sum of first 5 Numbers")

i = 1
sum = 0

while i <= 5:
    sum += i
    i += 1

print(sum)

"""
Iteration	j	Condition (i<=5)	sum +=1 	j After Update
1	        1	   True	             0+1=1	     2
2	        2	   True	             2+1=3       3
3	        3	   True	             3+3=6       4
4	        4	   True	             4+6=10      5
5	        5	   True 	         5+10=15     6
6	        6	   False	         Stop	     -
"""

# Example 3 - CountDown
print("Example 3 - CountDown")
count = 5

while count > 0:
    print(count)
    count -= 1

# An infinite loop never ends.
"""
while True:
    print("Hello")

The condition is always true, 
so the loop never stops.
"""
"""
When to Use while
  Use a while loop when:
> Number of repetitions is unknown.
> Execution depends on a condition.
> User input determines when the loop ends.
"""
/* Syntax:
while(condition)
{
    statement;
}
*/


// Example 1- print Numbers from 1 to 5

#include <iostream>
using namespace std;

int main()
{
    int i = 1; // initialization

    cout << "\nExample 1- print Numbers from 1 to 5\n";

    while(i <= 5) // Condition
    {
        cout << i << endl; // body
        i++; // Update (i = i+1)
    }



/*
Iteration	i	Condition (i<=5)	Output	i After Update
1	        1	   True	              1	         2
2	        2	   True	              2	         3
3	        3	   True	              3	         4
4	        4	   True	              4	         5
5	        5	   True 	          5 	     6
6	        6	   False	         Stop	     -
*/

// Example 2 - Sum of first 5 Numbers

cout <<"\nExample 2 - Sum of first 5 Numbers\n";

int sum = 0;
int j = 1;
while(j <= 5)
{
    sum += j;
    j++;
}

cout << sum << endl;

/*
Iteration	j	Condition (i<=5)	sum +=1 	j After Update
1	        1	   True	             0+1=1	     2
2	        2	   True	             2+1=3       3
3	        3	   True	             3+3=6       4
4	        4	   True	             4+6=10      5
5	        5	   True 	         5+10=15     6
6	        6	   False	         Stop	     -
*/

// Example 3 - CountDown
cout <<"\nExample 3 - CountDown\n";
int count = 5;

while(count > 0)
{
    cout << count << endl;
    count--;
}

return 0;
}

// An infinite loop never ends.
/*
while(true)
{
    cout << "Hello";
}

The condition is always true, 
so the loop never stops.
*/
/* 
When to Use while
  Use a while loop when:
> Number of repetitions is unknown.
> Execution depends on a condition.
> User input determines when the loop ends.
*/
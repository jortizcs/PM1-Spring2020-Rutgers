# Lab-2

For the lab, please submit a document with urls (one for each problem) to http://cpp.sh with your solution. On the site there is a button to create a URL. When your solution is complete (and tested so you verified it is working), click on the make URL link and add that link in your submission. Your code should include your name, netID and RUID.


## Problem 1


You will be given two positive integers, a and b (a <= b). 

For each integer n in the interval \[a,b\]:
* If 1 <= n <= 9, the print the English representation of it in lowercase. That is, "one" for 1, "two" for 2 and so on.
* Else if n > 9 and it is an even numeber, then print "even".
* Else if n > 9 and it is an odd number, then print "odd".
* Check that a<=b.  Write cerr and return a non-zero value if this condition does not hold.

Example:
8
11

output:
eight
nine
even
odd

```C
#include <iostream>
using namespace std;

int main()
{
  int a,b;
  
  cout << "Enter the first number:";
  cin >> a;
  cout << "Enter the second number:";
  cin >> b;
  
  //you code here
}

```

## Problem 2

Write a program that takes in three arguments, a start temperature (in Celsius), an end temperature (in Celsius) and a step size. Print out a table that goes from the start temperature to the end temperature, in steps of the step size; The leftmost column will indicate the degree in Celsius and the rightmost column should indicate the degree in Fahrenheit.  You do not actually need to print the final end temperature if the step size does not exactly match. 

You should perform input validation: 
* do not accept start temperatures less than a lower limit (which your code should specify as a constant) or higher than an upper limit (which your code should also specify). 
* You should not allow a step size greater than the difference in temperatures. 
* Check that the start temp is less than or equal to the end temperature.  Write cerr and return a non-zero value if this condition does not hold.

Example:
0 2 4

Output:

0 32

2 35.6

4 39.2


```C
#include <iostream>
using namespace std;


int main()
{
  double start_temp, end_temp, step_size;
  
  cout << "Enter the first number:";
  cin >> start_temp;
  cout << "Enter the second number:";
  cin >> end_temp;
  cout << "Step size:";
  cin >> step;
  
  //you code here
  
  return 0;  
}


```




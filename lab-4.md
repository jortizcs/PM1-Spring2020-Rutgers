# Lab-4

Due date: March 10, 20202 @11:59:59 PM

For the lab, please submit a document with urls (one for each problem) to http://cpp.sh with your solution. On the site there is a button to create a URL. When your solution is complete (and tested so you verified it is working), click on the make URL link and add that link in your submission. Your code should include your name, netID and RUID.


## Problem 1

Please fill in the code to reverse a linked list.

```C
#include <stdio.h> 
#include <stdlib.h> 
#include <iostream>

using namespace std;

/* Link list node */
struct Node { 
	int data; 
	// your code here
}; 

/* Function to reverse the linked list */
static void reverse(struct Node** head_ref) 
{ 
	// your code here 
} 

/* Function to push a node */
void push(struct Node** head_ref, int new_data) 
{ 
	// your code here 
} 

/* Function to print linked list */
void printList(struct Node* head) 
{ 
	struct Node* temp = head; 
	while (temp != NULL) { 
		cout << temp->data << " "; 
		temp = temp->next; 
	} 
} 

/* Driver program to test above function*/
int main() 
{ 
	/* Start with the empty list */
	struct Node* head = NULL; 

	push(&head, 10); 
	push(&head, 20); 
	push(&head, 15); 
	push(&head, 85); 

	cout << "Forward list\n"; 
	printList(head); 
	reverse(&head); 
	cout << "\nReversed list \n"; 
	printList(head); 
} 
```

## Problem 2

Write a function to reverse an array of integers starting from a given **start** index and a given **end** index.  Note, the end index is **inclusive**.  

```C
#include <iostream>
using namespace std;

void reverseArray(int[], int, int);

void reverseArray(int arr[], int start, int end) 
{ 
   // your code here    
}

/* Utility that prints out an array on a line */
void printArray(int arr[], int size)
{
  int i;
  for (i=0; i < size; i++)
    cout << arr[i] << " ";
  cout << endl;
}

/* Driver function to test above functions */
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    printArray(arr, 6);
    reverseArray(arr, 0, 5);
    cout <<"Reversed array is \n";
    printArray(arr, 6);
    return 0;
}
```


## Problem 3

Given a matrix, clockwise-rotate elements in it.  Please add code to [problem3.cpp](https://github.com/jortizcs-rutgers/PM1-Spring2020-Rutgers/blob/master/lab4/p3/problem3.cpp) and the [makefile](https://github.com/jortizcs-rutgers/PM1-Spring2020-Rutgers/blob/master/lab4/p3/makefile).  Use the code in [p3](https://github.com/jortizcs-rutgers/PM1-Spring2020-Rutgers/tree/master/lab4/p3) to test your code.

Submit your code and a cpp.sh url, like in your projects and previous assignments.  For the cpp.sh url, put your solution into one large program.

```
Input
1    2    3
4    5    6
7    8    9

Output:
4    1    2
7    5    3
8    9    6

For 4*4 matrix
Input:
1    2    3    4    
5    6    7    8
9    10   11   12
13   14   15   16

Output:
5    1    2    3
9    10   6    4
13   11   7    8
14   15   16   12
```

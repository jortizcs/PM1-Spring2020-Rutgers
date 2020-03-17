# Lab-4
For the lab, please submit a document with urls (one for each problem) to http://cpp.sh with your solution. On the site there is a button to create a URL. When your solution is complete (and tested so you verified it is working), click on the make URL link and add that link in your submission. Your code should include your name, netID and RUID.


## Problem 1

http://cpp.sh/5mkc6

```C

// Iterative C program to reverse a linked list 
// Modified by Jorge Ortiz, Rutgers University
// Lab 4 Solution, Problem 1
#include <stdio.h> 
#include <stdlib.h> 
#include <iostream>

using namespace std;

/* Link list node */
struct Node { 
	int data; 
	struct Node* next; 
}; 

/* Function to reverse the linked list */
static void reverse(struct Node** head_ref) 
{ 
	struct Node* prev = NULL; 
	struct Node* current = *head_ref; 
	struct Node* next = NULL; 
	while (current != NULL) { 
		// Store next 
		next = current->next; 

		// Reverse current node's pointer 
		current->next = prev; 

		// Move pointers one position ahead. 
		prev = current; 
		current = next; 
	} 
	*head_ref = prev; 
} 

/* Function to push a node */
void push(struct Node** head_ref, int new_data) 
{ 
	struct Node* new_node = (struct Node*)malloc(sizeof(struct Node)); 
	new_node->data = new_data; 
	new_node->next = (*head_ref); 
	(*head_ref) = new_node; 
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

	cout << "Given linked list\n"; 
	printList(head); 
	reverse(&head); 
	cout << "\nReversed Linked list \n"; 
	printList(head); 
} 

```


## Problem 2

Write a function to reverse an array of integers starting from a given **start** index and a given **end** index.  Note, the end index is **inclusive**.  

http://cpp.sh/7wdtu

```C
// Reverse an array between indices
// Modified by Jorge Ortiz, Rutgers University
// Lab 4 Solution, Problem 2

#include <iostream>
using namespace std;

void reverseArray(int[], int, int);

void reverseArray(int arr[], int start, int end) 
{ 
   int temp; 
   if (start >= end) 
     return; 
   temp = arr[start];    
   arr[start] = arr[end]; 
   arr[end] = temp; 
  reverseArray(arr, start+1, end-1);    
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

[Solution](https://github.com/jortizcs-rutgers/PM1-Spring2020-Rutgers/tree/master/lab4/p3-soln)

Given a matrix, clockwise-rotate elements in it.  Please add the code to problem3.h and problem3.cpp, provided.

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



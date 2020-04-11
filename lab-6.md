# Lab-6

Due date: 11:59:59pm on Sunday, April 26, 2020.

1.	All students must submit their lab through Sakai. 
2.	Only one .cpp file named “lab6.cpp” is required for submission.

Your code should include your name, netID and RUID.

## Problem 1

Create a program that displays the address information and calculates the shipping for several packages. Firstly, the user is asked to enter the information of **one or more packages**, including the name, address, city, state, and ZIP code for both sender and recipient, and the weight and delivery method of the package. Then, the package information should be used to initialize the class constructor. You are required to use a vector of Package pointers to objects of classes **Package, TwoDayPackage, and OvernightPackage**. Finally, loop through the vector to process the packages polymorphically to calculate the cost of each package and the total cost of the package list (vector) and print out this information in addition to the information of the sender and the recipient. Specifically, invoke **get functions** (e.g., get_sender_name, etc.) to obtain the information of sender, recipient, weight and delivery method for each package. Print the names and addresses as they would appear as mailing labels. Display the weight of the package being shipped and its shipping method. Call each package’s **calculateCost** member function and print the result. Keep track of total shipping cost for all packages in the vector and display it.

**Note:** Assign cost per ounce, two day delivery flat fee, and overnight delivery flat fee as $0.50, $2.00, and $5.00 in the main function, respectively. And use these variables to initialize the class constructors later.

Example:
```
Input package information? (1/0) 1

Sender name: John Smith
Sender street address: 1 Davidson Road
Sender city: Piscataway
Sender state: NJ
Sender ZIP code: 08854
Recipient name: Tom Smith
Recipient street address: 2 Campus Road
Recipient city: Piscataway
Recipient state: NJ
Recipient ZIP code: 08854
Package weight (ounces): 2
Delivery method (R: regular, T: two day, O: overnight): O
Overnight

Input package information? (1/0) 1

Sender name: Mary Smith
Sender street address: 3 Brett Road
Sender city: Piscataway
Sender state: NJ
Sender ZIP code: 08854
Recipient name: Jane Smith
Recipient street address: 4 Allison Road
Recipient city: Piscataway
Recipient state: NJ
Recipient ZIP code: 08854
Package weight (ounces): 10
Delivery method (R: regular, T: two day, O: overnight): R
Regular

Input package information? (1/0) 1

Sender name: Tom Smith
Sender street address: 2 Campus Road
Sender city: Piscataway
Sender state: NJ
Sender ZIP code: 08854
Recipient name: Mary Smith
Recipient street address: 3 Brett Road
Recipient city: Piscataway
Recipient state: NJ
Recipient ZIP code: 08854
Package weight (ounces): 5
Delivery method (R: regular, T: two day, O: overnight): T
Two day

Input package information? (1/0) 0

**********************************************
Package delivery information list

Cost per ounce for a package: $0.50/ounce
Additional cost for two day delivery: $2.00/ounce
Additional cost for overnight delivery: $5.00/ounce

Package 1:

Sender:
John Smith
1 Davidson Road
Piscataway, NJ 08854

Recipient:
Tom Smith
2 Campus Road
Piscataway, NJ 08854

Weight of package: 2 ounce(s)
Type of delivery: Overnight delivery
Cost of package: $11.00

Package 2:

Sender:
Mary Smith
3 Brett Road
Piscataway, NJ 08854

Recipient:
Jane Smith
4 Allison Road
Piscataway, NJ 08854

Weight of package: 10 ounce(s)
Type of delivery: Regular delivery
Cost of package: $5.00

Package 3:

Sender:
Tom Smith
2 Campus Road
Piscataway, NJ 08854

Recipient:
Mary Smith
3 Brett Road
Piscataway, NJ 08854

Weight of package: 5 ounce(s)
Type of delivery: Two day delivery
Cost of package: $12.50

Total numbers of packages: 3
Total cost of all packages: $28.50


```

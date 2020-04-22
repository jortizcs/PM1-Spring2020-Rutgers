# Lab-5

Due date: 11:59:59pm on ~~Tuesday, April 21, 2020~~ Friday, April 24, 2020.  **Hard Deadline.  No more extensions**

1.	All students must submit their lab through Sakai. 
2.	Only one .cpp file named “lab5.cpp” is required for submission.

Your code should include your name, netID and RUID.

## Problem 1

In this lab, you will build a system for package delivery services that provides different shipping options with specific price. 

You are required to create an inheritance hierarchy to represent the various types of packages. Use **Package** as the base class of the hierarchy and include classes **TwoDayPackage** and **OvernightPackage** that derive from **Package**. The base class **Package** should include data members representing the **name, address, city, state and ZIP code** for both the sender and the recipient of the package, and data members that store the weight (in ounces) and **cost per ounce** to ship the package. **The constructor of the class Package should initialize these data members.**

**The weight and the cost per ounce should contain positive values.** The class **Package** should provide a public member function **calculateCost** that returns a double indicating the cost associated with shipping the package. The **calculateCost** function in class **Package** should determine the cost by multiplying the weight by the cost per ounce.

The derived class **TwoDayPackage** should not only inherit the functionality of the base class **Package**, but also include a data member that represents a **flat fee per ounce** that the shipping company charges for two-day delivery. The constructor of the class **TwoDayPackage** should receive a value to initialize this data member. Class **TwoDayPackage** should redefine member function **calculateCost** so that it computes the shipping cost by adding a flat fee per ounce to the standard cost per ounce calculated by the **calculateCost** function in the base class **Package**.

The requirements of the derived class **OvernightPackage** are similar as that of the class **TwoDayPackage**. Specifically, class **OvernightPackage** should inherit directly from class **Package** and contain an additional data member representing an additional flat fee per ounce charged for overnight delivery. Class **OvernightPackage** should redefine member function **calculateCost** so that it adds the additional fee per ounce to the standard cost per ounce when calculating the shipping cost.

Write a main.cpp file which includes a main function, only to test your library.  You may submit it with the code.  You may also copy-paste your code in cpp.sh and include a link with your submission (this will also make it easier for TAs to check your code during lab time).


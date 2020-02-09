# Lab 1
https://github.com/jortizcs-rutgers/PM1-Spring2020-Rutgers/blob/master/lab-1.md

# Solutions

Problem 1:  [http://cpp.sh/8n7s](http://cpp.sh/8n7s)

```C
// Example program
// Lab 1 Solution
// Jorge Ortiz
// Programming Methodology 1, Rutgers University

#include <iostream>
#include <string>
using namespace std;


//takes the average of four numbers
int main()
{
  int a,b,c,d;
  double n=4,average;
  
  cout << "Enter the first number:";
  cin >> a;
  cout << "Enter the second number:";
  cin >> b;
  cout << "Enter the third number:";
  cin >> c;
  cout << "Enter the fourth number:";
  cin >> d;
  
  average = (a+b+c+d)/n;
  cout << "Average values:" << average;
  return 0;
}
```

Problem 2:  [http://cpp.sh/4zowu](http://cpp.sh/4zowu)

```C
// Example program
// Lab 1 Solution
// Jorge Ortiz
// Programming Methodology 1, Rutgers University

// Example program
#include <iostream>
#include <string>
using namespace std;

//takes the average of four numbers
int main()
{
    // complete the code below
    char a,b,c,d;
    int symbol;
    
    cout << "Enter the first character:";
    cin >> a;
    cout << "Enter the second character:";
    cin >> b;
    cout << "Enter the third character:";
    cin >> c;
    cout << "Enter the fourth character:";
    cin >> d;
    
    symbol = a+b+c+d;
    cout << "Symbol:" << symbol;
    return 0;
}
```

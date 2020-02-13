# Lab 2
https://github.com/jortizcs-rutgers/PM1-Spring2020-Rutgers/blob/master/lab-2.md

# Solutions
problem 1: [http://cpp.sh/4myrs](http://cpp.sh/4myrs)

```C
// Example program
// Lab 2 Solution - Problem 1
// Jorge Ortiz
// Programming Methodology 1, Rutgers University

#include <iostream>
using namespace std;

int main()
{
  int a,b;
  
  cout << "Enter the first number:";
  cin >> a;
  cout << "Enter the second number:";
  cin >> b;
  
  if (a>b){
    cerr << "Error";
    return 1;
  }
  
  if (a<=0 || b <=0){
      cerr << "integers must be positive";
      return 2;
  }
  
  for (int i=a; i<=b; i++){
      switch(i){
            case 1:
                cout << "one ";
                break;
            case 2:
                cout << "two ";
                break;
            case 3:
                cout << "three ";
                break;
            case 4:
                cout << "four ";
                break;
            case 5:
                cout << "five ";
                break;
            case 6:
                cout << "six ";
                break;
            case 7:
                cout << "seven ";
                break;
            case 8:
                cout << "eight ";
                break;
            case 9:
                cout << "nine ";
                break;
            default:
                if (i%2==0){
                    cout << "even ";
                }
                else{
                    cout << "odd ";
                }
                break;
          }
  }
  cout <<endl;
  return 0;
}
```

problem 2: [http://cpp.sh/6i6yi](http://cpp.sh/6i6yi)

```C
// Example program
// Lab 2 Solution - Problem 2
// Jorge Ortiz
// Programming Methodology 1, Rutgers University

#include <iostream>
using namespace std;


int main()
{
    float start_temp, step_size, end_temp;
    const float lowbound = -89.2;   //lowest recorded temperature on earth in degrees celsius
    const float upperbound = 57.6;  //highest recorded temperature on earth in degrees celsius
    float f;
    
    cout << "Enter the start temperature (C):";
    cin >> start_temp;
    cout << "Enter the end temperature (C):";
    cin >> end_temp;
    cout << "Step size:";
    cin >> step_size;
    
    if (start_temp<lowbound)
        cout << "ERROR"<<endl;
    
    if (step_size>end_temp-start_temp)
        cout << "ERROR" << endl;
    
    if (end_temp>upperbound)
        cout << "ERROR"<<endl;
    
    if (step_size<=0)
        cout << "ERROR"<<endl;
    
    for (float i=start_temp; i<=end_temp; i+=step_size){
        f = (((float)i)*(9.0/5.0))+32.0;
        cout << i << "\t" << f << endl;
    }
    
    
    return 0;  
}
```

# Lab 3: 
https://github.com/jortizcs/Rutgers-PM1/blob/master/2020/lab3.md

# Solutions:
Problem 1: [http://cpp.sh/9slrv](http://cpp.sh/9slrv)

```C
// Programming Methodology 1 -- Spring 2020
// Rutgers University
// Jorge Ortiz
// Lab 3 Solutions
// Problem 1

#include <iostream>

using namespace std;

unsigned int fib(unsigned int n);

int main(){
    unsigned int n, res;
    cin >> n;
    res  = fib(n);
    cout << endl << res << endl;
}

unsigned int fib(unsigned int n){
    int nm1=0,nm2=1,val=1;
    for (int i=0; i<n-2; i++){
        nm1=nm2;
        nm2=val;
        val=nm1+nm2;
        cout << "(" << i << ", " << val << ")\t";
    }
    return val;
}
```

Problem 2: [http://cpp.sh/7jjrh](http://cpp.sh/7jjrh)

```C
// Programming Methodology 1 -- Spring 2020
// Rutgers University
// Jorge Ortiz
// Lab 3 Solutions
// Problem 2

#include <iostream>

using namespace std;

unsigned int fib(unsigned int n);

int main(){
    unsigned int n, res;
    cin >> n;
    res  = fib(n);
    cout << endl << res << endl;
}

unsigned int fib(unsigned int n){
    cout << "fib(" << n << ")\t";
    if (n<2)
        return n;
    return fib(n-1)+fib(n-2);
}
```

Problem 3: [http://cpp.sh/2b5lk](http://cpp.sh/2b5lk)

```C
// Programming Methodology 1 -- Spring 2020
// Rutgers University
// Jorge Ortiz
// Lab 3 Solutions
// Problem 3

#include <iostream>

using namespace std;

int main(){
    int k;
    cin >> k;

    int m=2*k-1;

    for (int i=0; i<m; i++){
        int cnt=0;
        int curr_val=k;
        int idx=1;
        for (int j=0; j<m; j++){
            if (i<m/2+1){
                if (k-j>=k-i && k-i>=1){
                    cout << k-j << " ";
                    cnt+=1;
                    curr_val=k-j;
                } else if (j<=m-cnt){
                    cout << curr_val << " ";
                } else {
                    if (curr_val < k)
                        curr_val +=1;
                    cout << curr_val << " ";
                }
            } else{
                curr_val = 2+(i%((m/2)+1));
                if (k-j>=curr_val){
                    cout << k-j << " ";
                } else if (j<m-(k-curr_val)){
                    cout << curr_val << " ";
                } else {
                    cout << curr_val+idx << " ";
                    idx+=1;
                }
            }
        }
        cout << endl;
    }
    return 0;
}
```

// Demonstrating a public member function that
// returns a reference to a private data member.
#include <iostream>
using std::cout;
using std::endl;
// include definition of class Time from time4.h
#include "time4.h"
int main()
{
    Time t;
    // store in hourRef the reference returned by badSetHour
    int &hourRef = t.badSetHour( 20 );
    cout << "Hour before modification: " << hourRef;
    // use hourRef to set invalid value in Time object t
    hourRef = 30;
    cout << "\nHour after modification: " << t.getHour();
    // Dangerous: Function call that returns
    // a reference can be used as an lvalue!
    t.badSetHour( 12 ) = 74;
    cout << "\n\n*********************************\n"
        << "POOR PROGRAMMING PRACTICE!!!!!!!!\n"
        << "badSetHour as an lvalue, Hour: "
        << t.getHour()
        << "\n*********************************" << endl;
    return 0;
} // end main

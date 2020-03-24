// Demonstrating the Time class set and get functions
#include <iostream>
using namespace std;
// include definition of class Time from time3.h
#include "time3.h"
void incrementMinutes( Time &, const int ); // prototype
int main()
{
    Time t; // create Time object
    // set time using individual set functions
    t.setHour( 17 ); // set hour to valid value
    t.setMinute( 34 ); // set minute to valid value
    t.setSecond( 25 ); // set second to valid value
    // use get functions to obtain hour, minute and second
    cout << "Result of setting all valid values:\n"
        << " Hour: " << t.getHour()
        << " Minute: " << t.getMinute()
        << " Second: " << t.getSecond();
    // set time using individual set functions
    t.setHour( 234 ); // invalid hour set to 0
    t.setMinute( 43 ); // set minute to valid value
    t.setSecond( 6373 ); // invalid second set to 0
    // display hour, minute and second after setting
    // invalid hour and second values
    cout << "\n\nResult of attempting to set invalid hour and"
        << " second:\n Hour: " << t.getHour()
        << " Minute: " << t.getMinute()
        << " Second: " << t.getSecond() << "\n\n";
    t.setTime( 11, 58, 0 ); // set time
    incrementMinutes( t, 3 ); // increment t's minute by 3
    return 0;
} // end main

// add specified number of minutes to a Time object
void incrementMinutes( Time &tt, const int count ){
    return;
} // end function incrementMinutes

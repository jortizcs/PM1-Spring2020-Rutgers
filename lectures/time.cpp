// Member-function definitions for class Time.
#include <iostream>
using std::cout;
#include <iomanip>
using std::setfill;
using std::setw;
// include definition of class Time from time1.h
#include "time.h"
// Time constructor initializes each data member to zero.
// Ensures all Time objects start in a consistent state.
Time::Time()
{
    hour = minute = second = 0;
} // end Time constructor
// Set new Time value using universal time. Perform validity
// checks on the data values. Set invalid values to zero.
void Time::setTime( int h, int m, int s )
{
    hour = ( h >= 0 && h < 24 ) ? h : 0;
    minute = ( m >= 0 && m < 60 ) ? m : 0;
    second = ( s >= 0 && s < 60 ) ? s : 0;
} // end function setTime

// print Time in universal format
void Time::printUniversal()
{
    cout << setfill( '0' ) << setw( 2 ) << hour << ":"
            << setw( 2 ) << minute << ":"
            << setw( 2 ) << second;
} // end function printUniversal
// print Time in standard format
void Time::printStandard()
{
    cout << ( ( hour == 0 || hour == 12 ) ? 12 : hour % 12 )
        << ":" << setfill( '0' ) << setw( 2 ) << minute
        << ":" << setw( 2 ) << second
        << ( hour < 12 ? " AM" : " PM" );
} // end function printStandard


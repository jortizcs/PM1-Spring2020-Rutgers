// Member functions are defined in time1.cpp
// prevent multiple inclusions of header file
// Time abstract data type definition

// Member-function definitions for class Time.
#include <iostream>
using std::cout;
#include <iomanip>
using std::setfill;
using std::setw;
// include definition of class Time from time1.h
class Time {
    public:
        Time(); // constructor
        void setTime( int, int, int ); // set hour, minute, second
        void printUniversal(); // print universal-time format
        void printStandard(); // print standard-time format
    private:
        int hour; // 0 - 23 (24-hour clock format)
        int minute; // 0 - 59
        int second; // 0 - 59
}; // end class Time

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


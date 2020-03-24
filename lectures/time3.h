// Declaration of class Time.
// Member functions defined in time3.cpp
// prevent multiple inclusions of header file
#ifndef TIME3_H
#define TIME3_H
class Time {
    public:
        Time( int = 0, int = 0, int = 0 ); // default constructor
        // set functions
        void setTime( int, int, int ); // set hour, minute, second
        void setHour( int ); // set hour
        void setMinute( int ); // set minute
        void setSecond( int ); // set second
        // get functions
        int getHour(); // return hour
        int getMinute(); // return minute
        int getSecond(); // return second
        void printUniversal(); // output universal-time format
        void printStandard(); // output standard-time format
    private:
        int hour; // 0 - 23 (24-hour clock format)
        int minute; // 0 - 59
        int second; // 0 - 59
}; // end class Time
#endif

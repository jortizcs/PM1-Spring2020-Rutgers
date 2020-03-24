// Member functions are defined in time1.cpp
// prevent multiple inclusions of header file
#ifndef TIME_H
#define TIME_H
// Time abstract data type definition
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
#endif

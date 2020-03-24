// Declaration of class Time.
// Member functions defined in time2.cpp.
// prevent multiple inclusions of header file
#ifndef TIME2_H
#define TIME2_H
// Time abstract data type definition
class Time {
    public:
        Time( int = 0, int = 0, int = 0); // default constructor
        void setTime( int, int, int ); // set hour, minute, second
        void printUniversal(); // print universal-time format
        void printStandard(); // print standard-time format
    private:
        int hour; // 0 - 23 (24-hour clock format)
        int minute; // 0 - 59
        int second; // 0 - 59
}; // end class Time
#endif

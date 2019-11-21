// Lab 5: Date.h
#ifndef DATE_H
#define DATE_H

class Date
{
public:
   Date( int = 1, int = 1, int = 2000 ); // default constructor
   void print(); // print function
   void setDate( int, int, int ); // set month, day, year
   void setMonth( int ); // set month
   void setDay( int ); // set day
   void setYear( int ); // set year
   int getMonth(); // get month
   int getDay(); // get day
   int getYear(); // get year
   /* Write a member function prototype for nextDay,
      which will increment the Date by one day */
   void nextday (int ,int ,int );

private:
   int month; // 1-12
   int day; // 1-31 (except February(leap year), April, June, Sept, Nov)
   int year; // 1900+
   bool leapYear(); // leap year
   int monthDays(); // days in month
}; // end class Date

#endif

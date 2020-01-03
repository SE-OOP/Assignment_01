// Lab 5: DateTest.cpp
#include <iostream>
using namespace std;

#include "Date.h" // include definitions of class Date

int main()
{
   const int MAXDAYS = 16;
   Date d( 12, 24, 2004 ); // instantiate object d of class Date

   // output Date object d's value
   for ( int loop = 1; loop <= MAXDAYS; ++loop )
   {
      d.print(); // invokes function print
      /* Write call to nextDay */
      d.nextday(d.getMonth(),d.getDay(),d.getYear());
   } // end for

   cout << endl;
} // end main

// Exercise 6.50 Solution: Ex06_50.cpp
// Comparing call by value and call by reference.
#include <iostream>
using namespace std;

int tripleByValue( int ); // function prototype
void tripleByReference( int & ); // function prototype

int main()
{
   int count; // local variable for testing

   // prompt for count value
   cout << "Enter a value for count: ";
   cin >> count;

   // using call by value
   cout << "\nValue of count before call to tripleByValue() is: "
      << count << "\nValue returned from tripleByValue() is: "
      << tripleByValue( count )
      << "\nValue of count (in main) after tripleCallByValue() is: "
      << count;

   // using call by reference
   cout << "\n\nValue of count before call to tripleByReference() is: "
      << count << endl;

   tripleByReference( count );

   cout << "Value of count (in main) after call to "
      << "tripleByReference() is: " << count << endl;
} // end main

// tripleByValue uses call-by-value parameter passing to triple the value
int tripleByValue( int value )
{
   return value *= 3;
} // end function tripleByValue

// tripleByReference uses call-by-reference parameter passing
// to triple the variable referenced by valueRef
void tripleByReference( int &valueRef )
{
   valueRef *= 3;
} // end function tripleByReference

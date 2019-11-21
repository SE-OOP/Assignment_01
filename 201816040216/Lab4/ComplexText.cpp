// Lab 4: ComplexTest.cpp
#include <iostream>
using namespace std;

#include "Complex.h"

int main()
{
   Complex a( 1, 7 ), b( 9, 2 ), c(0,0); // create three Complex objects

   a.printComplex(); // output object a
   cout << " + ";
   b.printComplex(); // output object b
   cout << " = ";
   c = a.add( b ); // invoke add function and assign to object c
   c.printComplex(); // output object c

   cout << '\n';
   a.setComplexNumber( 10, 1 ); // reset realPart and
   b.setComplexNumber( 11, 5 ); // and imaginaryPart
   a.printComplex(); // output object a
   cout << " - ";
   b.printComplex(); // output object b
   cout << " = ";
   c = a.subtract( b ); // invoke add function and assign to object c
   c.printComplex(); // output object c
   cout << endl;
} // end main



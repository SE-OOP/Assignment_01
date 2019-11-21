// Lab Exercise 6: CalcTest.cpp

#include <iostream>
using namespace std;

#include "SimpleCalculator.h"

int main()
{

   double a = 10.0;
   double b = 20.0;

   /* Instantiate an object of type Simplecalculator */
   cout << "The value of a is: " << a << "\n";
   cout << "The value of b is: " << b << "\n";

      SimpleCalculator sc;
   /* Write a line that adds a and b through your SimpleCalculator
      object; assign the result to a variable named addition */
      double addition=sc.add(a,b);
   cout << "Adding a and b yields " << addition << "\n";

   double subtraction = sc.subtract( a, b );
   cout << "Subtracting b from a yields " << subtraction << "\n";

   double multiplication = sc.multiply( a, b );
   cout << "Multiplying a by b yields " << multiplication << "\n";

   /* Write a line that divides a and b through the
      SimpleCalculator object; assign the result to a
	  variable named division */
	 double division=sc.divide(a,b);
   cout << "Dividing a by b yields " << division << endl;
}

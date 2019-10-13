// Exercise 6.50 Solution: Ex06_50.cpp
// Comparing call by value and call by reference.
#include <iostream>
using namespace std;

int tripleByValue(int);        // function prototype
void tripleByReference(int &); // function prototype

int main()
{
   int value;
   cout << "Enter a value for count:";
   cin >> value;  //read a number
   cout << endl;

   cout << "Value of count before call to tripleByValue() is: " << value << endl;
   cout << "Value returned from tripleByValue() is: " << tripleByValue(value) << endl; 
   cout << "Value of count (in main) after tripleCallByValue() is: " << value << endl;
   cout << endl;

   cout << "Value of count before call to tripleByReference() is: " << value << endl;
   tripleByReference(value); //call function tripleByReference
   cout << "Value of count (in main) after call to tripleByReference() is: " << value << endl;

   return 0;
}

int tripleByValue(int value)
{
   value *= 3;   //let value *3
   return value; //return value
}

void tripleByReference(int &value)
{
   value *= 3; //let value *3
}
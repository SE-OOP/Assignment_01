// Exercise 6.50 Solution: Ex06_50.cpp
// Comparing call by conut and call by reference.
#include <iostream>
using namespace std;

int tripleByValue(int);        // function prototype
void tripleByReference(int &); // function prototype

int main()
{
   int conut;
   cout << "Enter a conut for count:";
   cin >> conut;  //read a number
   cout << endl;

   cout << "Value of count before call to tripleByValue() is: " << conut << endl;
   cout << "Value returned from tripleByValue() is: " << tripleByValue(conut) << endl; 
   cout << "Value of count (in main) after tripleCallByValue() is: " << conut << endl;
   cout << endl;

   cout << "Value of count before call to tripleByReference() is: " << conut << endl;
   tripleByReference(conut); //call function tripleByReference
   cout << "Value of count (in main) after call to tripleByReference() is: " << conut << endl;

   return 0;
}

int tripleByValue(int conut)
{
   conut *= 3;   //let conut *3
   return conut; //return conut
}

void tripleByReference(int &conut)
{
   conut *= 3; //let conut *3
}
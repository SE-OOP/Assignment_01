// Exercise 6.50 Solution: Ex06_50.cpp
// Comparing call by value and call by reference.
#include <iostream>
using namespace std;

int tripleByValue( int ); // function prototype
void tripleByReference( int & ); // function prototype

int main()
{
	int count;
	cout << "Enter a value for count: ";
	cin >> count;
	cout << endl;
	
	//demonstrate tripleByValue
	cout <<"Value of count before call to tripleByValue() is:" << count << endl;
	cout <<"Value returned from tripleByValue() is:" << tripleByValue( count ) << endl;
	cout <<"Value of count (in main) after tripleCallByValue() is:" << count << endl;
	cout << endl;
	
	//demonstrate tripleByReference
	cout <<"Value of count before call to tripleByReference() is:" << count << endl;
	tripleByReference( count );
	cout <<"Value of count (in main) after call to tripleByReference() is:" << count << endl;
   return 0;
}

int  tripleByValue( int number){
	number=number*3;
	return number;
}

void tripleByReference( int &number ){
	number=number*3;
}

//Reviews: Excellent. Keep up good work.

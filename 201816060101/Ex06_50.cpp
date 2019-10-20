#include <iostream>
using namespace std;

int tripleByValue(int Value) {		//calling function by value
	return Value * 3;
}

void tripleByReference(int &Value) {	//calling function by reference
	Value *= 3;
}

int main() {
	int count = 0;	//initialization of count
	cout << "Enter a value for count: ";
	cin >> count;	//Assign values to count

	cout << "\nValue of count before call to tripleByValue() is: " << count << "\n";			//Value of count before call to tripleByValue()
	cout << "Value returned from tripleByValue() is: " << tripleByValue(count) << "\n";			//Value returned from tripleByValue()
	cout << "Value of count (in main) after tripleCallByValue() is: " << count << "\n\n";		//Value of count (in main) after tripleCallByValue()

	cout << "Value of count before call to tripleByReference() is: " << count << "\n";			//Value of count before call to tripleByReference()
	tripleByReference(count);
	cout << "Value of count (in main) after call to tripleByReference() is: " << count << "\n";	//Value of count (in main) after call to tripleByReference()
	return 0;
}
/*
Enter a value for count: 10

Value of count before call to tripleByValue() is: 10
Value returned from tripleByValue() is: 30
Value of count (in main) after tripleCallByValue() is: 10

Value of count before call to tripleByReference() is: 10
Value of count (in main) after call to tripleByReference() is: 30
*/

#include <iostream>
using namespace std;

int cal0(int val) {		//calling function by value
	return val * 3;
}

void cal1(int &val) {	//calling function by reference
	val *= 3;
}

int main() {
	int count = 0;		//an invalid initialization
	cout << "Before calling function：count = " << count;
	cout << "\nThe result of the first function：" << cal0(count);		//the first result
	cout << "\nThe result of the second function：";
	cal1(count);
	cout << count << "\n\nemmmmm...\nThis value doesn't seem to work... Try another value.\n";	//the socond result

	count = 10;			//a valid initialization
	cout << "\nBefore calling function：count = " << count;
	cout << "\nThe result of the first function：" << cal0(count);		//the first result
	cout << "\nThe result of the second function：";
	cal1(count);
	cout << count;		//the socond result
	cout << "\n\nThat's right. Yeah! o(*￣▽￣*)ブ \n\n";
	return 0;
}

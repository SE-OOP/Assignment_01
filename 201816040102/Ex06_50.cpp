#include <iostream>
using namespace std;
int tripleByValue(int x,int y)				//按值传递 
{
	y=3*x;
	x=y;
	return x;
}
int tripleByReference(int & x,int & y)			//引用参数传递 
{
	y=3*x;
	x=y;
	return x;
}
int main()
{
	int count,y=0;
	int & cc = count;
	cout << "Enter a value for count:"; 
	cin >> count ;
	
	cout << "Value of count before call to tripleByValue() is:";
	cout << count << "\n";
	
	cout << "Value returned from tripleByValue() is:";
	cout << tripleByValue(count,y) << "\n";
	
	cout << "Value of count (in main) after tripleCallByValue() is:";
	cout << count << "\n";
	
	cout <<"\n";
	cout << "Value of count before call to tripleByReference() is:";
	cout << count << "\n";
	cout << "Value of count (in main) after call to tripleByReference() is:";
	tripleByReference(cc,y);
	cout << count ;
	return 0;
}

#include <iostream>
using namespace std;
int tripleByValue(int a,int b)				//按值传递
{
	b=3*a;
	a=b;
	return a;
}
int tripleByReference(int & a,int & b)			//引用参数传递
{
	b=3*a;
	a=b;
	return a;
}
int main()
{
	int c,b=0;
	int & ok = c;
	cout << "Enter a value for count:";
	cin >> c  ;
    cout<<"\n\n";
	cout << "Value of count before call to tripleByValue() is:";
	cout << c << "\n";

	cout << "Value returned from tripleByValue() is:";
	cout << tripleByValue(c,b) << "\n";

	cout << "Value of count (in main) after tripleCallByValue() is:";
	cout << c << "\n";

	cout <<"\n";
	cout << "Value of count before call to tripleByReference() is:";
	cout << c << "\n";
	cout << "Value of count (in main) after call to tripleByReference() is:";
	tripleByReference(ok,b);
	cout << c ;
	return 0;
}

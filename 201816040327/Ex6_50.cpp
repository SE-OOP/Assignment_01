#include <iostream>

using namespace std;

void tripleByValue(int x)
{
	x = x*3;

	cout << " x = :" << x << endl; //输出按值传递的结果
}

void tripleByReference(int &x)
{
	x = x*3;

	cout << " x = :" << x << endl; //输出引用传递的结果
}

int main()
{
	int x;
	cout << "x =" << endl; //提示输入一个值
	cin >> x;
	cout << "after tripled by value\n";
	tripleByValue(x); //输出按值传递的结果

	cout << "after tripled by reference\n";
	tripleByReference(x); //输出引用传递的结果

	return 0;
}

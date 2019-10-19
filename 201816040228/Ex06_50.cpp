#include <iostream>

using namespace std;
int tripleByValue(int);//按值传递函数
void tripleByReference(int &);//按引用传递实参函数

int main()
{
    int x;
    cout << "Enter a value for count ";//输出一个数数
    cin >> x;//输入一个数
    cout << "Value of count before call to tripleByValue() is: " << x << endl;//将该数输出
    cout << "Value returned from tripleByValue() is: " << tripleByValue (x) << endl;//输出调用按值传递函数后的数
    cout << "Value of count (in main) after tripleByValue() is: " << x << endl;//输出实参x;

    cout << "Value of count before call to tripleByReference() is: " << x << endl;//输出调用按引用传递实参函数后的数
    tripleByReference(x);
    //cout << "Value  from tripleByReference() is: " << x << endl;
    cout << "Value of count (in main) after tripleByReference() is: " << x << endl;//输出实参x;
}

int tripleByValue( int number )//按值传递函数
{
    return number = 3*number;
}

void tripleByReference( int &numberRef )//按引用传递实参函数

{
   numberRef=3*numberRef;
}

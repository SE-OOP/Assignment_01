#include <iostream>

using namespace std;

int tripleByValue(int);//按值传递参数函数
void tripleByReference(int &);//按引用传递参数函数

int main()
{
    int count = 2;
    cout << "Enter a value for count： " <<count << "\n\n" << endl;//开始前先输出变量count的值
    cout << "Value of count before call to tripleByValue() is: " <<count <<"\n";//输出执行按值传递函数之前变量count的值
    cout << "Value returned from tripleByValue() is: " <<tripleByValue( count ) <<"\n";//输出按值传递函数的值
    cout << "Value of count (in main) after tripleCallByValue() is: " <<count << "\n\n";//输出执行按值传递函数后变量count的值
    cout << "Value of count before call to tripleByReference() is: "<<count <<"\n";//输出执行按引用传递函数之前变量count的值
    tripleByReference( count );//执行按引用传递函数
    cout << "Value of count (in main) after call to tripleByReference() is: " <<count;//输出执行按引用传递函数后的变量count的值
    return 0;
}
int tripleByValue(int m)
{
    return m*=3;
}

void tripleByReference(int &m)
{
    m*=3;
}

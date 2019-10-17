#include<iostream>
using namespace std;

int tripleByValue(int t)//定义第一个函数，并定义一个形参
{
    return t*3;
}
void tripleReference(int &a)//定义第二个函数，定义另一个形参
{
    a=a*3;
}
int main()
{
    int count=0;//使count的值为0
    cin >> count;
    cout<<"Enter a value for count:"<<count<<endl;
    cout<<"Value of count before call to tripleByValue is:"<<count<<endl;//在使用第一个函数前将count的值输出
    cout<<"Value returned from tripleByValue() is:"<<tripleByValue(count)<<endl;//输出tripleByValue函数中的值
    cout<<"Value of count (in main) after tripleCallByValue() is:"<<count<<endl;//使用使用函数tripleByValuecount的值
    cout<<"Value of count before call to tripleByReference() is: "<<count<<endl;//使用函数tripleByReference前count的值
    tripleReference(count);//引用第二个函数
    cout<<"Value of count (in main) after call to tripleByReference() is: "<<count<<endl;//输出引用函数tripleByReference后count的值
}

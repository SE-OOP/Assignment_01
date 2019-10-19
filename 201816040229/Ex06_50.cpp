#include <iostream>

using namespace std;

int tripleByValue( int );//声明函数按值传递·
void tripleByReference( int &);//按引用传递

int main()
{
    int x;//定义一个整数x

    cout <<"Enter a value for count:";
    cin>>x;//输入一个整数

    cout <<"Value of count before call to tripleByValue() is:"<<x<<endl;//输出整数x
    cout <<"Value returned from tripleByValue() is:"<<tripleByValue(x)<<endl;//输出3*x（用按值传递函数）
    cout <<"Value of count (int main) after tripleCallByValue() is:"<<x<<endl;//输出x
    cout <<"Value of count before call to tripleByReference() is:"<<x<<endl;//输出x
    tripleByReference(x);
    cout <<"Value of count (int main) after call to tripleByReference() is:"<<x<<endl;//输出3*x（用按引用传递函数）
}

int tripleByValue( int number)
{
    return number *= 3;
}//按值传递函数

void tripleByReference( int &numberRef)
{
    numberRef *= 3;
}//按引用传递函数

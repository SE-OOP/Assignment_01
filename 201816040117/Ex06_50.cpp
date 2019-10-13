#include <iostream>

using namespace std;
int tripleByValue(int);//定义按值传递函数
int tripleByReference(int);//定义引用形参函数
int main()
{
    int number;//定义一个整型数字
    cout <<"请输入一个数字：";//提示语
    cin >> number;//输入数字
    cout <<"执行tripleByValue:\n"<<tripleByValue(number)<<endl;//执行函数trinpleByValue并输出
    cout <<"执行tripleByReference\n"<<tripleByReference(number)<<endl;//执行函数trinpleByReference并输出
    return 0;
}
int tripleByValue(int num)
{
    return num*3;//返回值num的3倍
}
int tripleByReference(int num)
{

    int &num2=num;//定义一个参数num2来改变num的值
    num2=num*3;//使num2为num的三倍，num的值也变为num的3倍
    return num;//返回num
}

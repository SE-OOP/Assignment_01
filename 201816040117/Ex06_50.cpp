
#include <iostream>

using namespace std;
int tripleByValue(int);//定义按值传递函数
void tripleByReference(int &);//定义引用形参函数
int main()
{
    int num;//定义一个整型数字
    cout <<"请输入一个数字：";//提示语
    cin >> num;//输入num
    cout <<"执行tripleByValue:\n"<<tripleByValue(num)<<endl;//执行函数trinpleByValue并输出
    tripleByReference(num);//执行trinpleByReference
    cout <<"执行tripleByReference\n"<<num<<endl;//输出执行trinpleByReference之后num的值
    return 0;
}
int tripleByValue(int num)
{
    return num*3;//返回值num的3倍
}
void tripleByReference(int &numRef)
{
    numRef=numRef*3;//通过形参改变num的值
}

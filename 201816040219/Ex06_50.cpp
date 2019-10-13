#include <iostream>

using namespace std;

int tripleByValue(int);
void tripleByReference(int &);

int main()
{
    int count;//定义一个整型变量count
    cout<<"please input the number:"<<endl;//打印在屏幕上显示请输入一个数字
    cin>>count;//输入一个数
    cout<<"use tripleByValue the count is :"<<tripleByValue(count)<<endl;//调用函数，按值传递变为3倍后的值
    count<<count;//打印结果
    cout<<"use tripleByReference the count is:";
    tripleByReference(count);//调用函数，按引用传递后变为3倍的值
    cout<<count;//打印结果
}
    int tripleByValue(int number1)//函数按值传递，变为3倍，返回结果
    {
        return number1*3;

    }
    void tripleByReference(int &number2)//通过引用参数传递，变为3倍，返回结果
    {
        number2=number2*3;
    }




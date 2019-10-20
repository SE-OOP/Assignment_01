#include <iostream>
using std::cout;
using std::cin;
using namespace std;

int tripleByValue(int);
void tripleByReference(int &);
//程序从下一行开始执行
int main()
{
    int count;//定义一个整型变量count
    cout << "Please enter the value of count: ";
    cin  >> count;//从键盘读入数据

    cout << "count = " << count << " before tripleByValue\n";//按值传递前count的值
    cout << "Value returned by tripleByValue: "
       << tripleByValue(count) << endl;//调用按值传递函数，并返回实参副本的值
    cout << "count = " << count << " after tripleByValue\n" << endl;//按值传递后count的值

    cout << "count = " << count << " before tripleByReference\n";//按引用传递前count的值
    tripleByReference(count);//调用按引用传递函数，在内存地址上改变实参的值
    cout << "count = " << count << " after tripleByReference\n" << endl;//按引用传递后count的值
    return 0;
}
int tripleByValue(int x)//按值传递函数
{
    x = x*3;
    return x;
}
void tripleByReference(int &xRef)//按引用传递函数
{
    xRef = xRef*3;
}

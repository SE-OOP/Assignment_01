#include <iostream>

using namespace std;
void tripleByValue(int x)                                        //定义一个按值传递函数
{
    x=3*x;                                                               //函数算法
    cout<<"函数中x的值为: ";
    cout<<x<<endl;                                              //输出
}
void tripleByRefence(int &x)                             //定义一个引用传递函数
{
    x=3*x;                                                            //函数算法
    cout<<"函数中x的值为: ";
    cout<<x<<endl;                                            //输出
}
int main()
{
    int x;                                                               //定义一个整型变量
    cout<<"请输入数据"<<endl;
    cin>>x;                                                             //读取数据
    cout<<"按值传递: "<<endl;
    cout<<"传递前x的值为: "<<x<<endl;
    tripleByValue(x);                                             //输出按值传递函数中的返回值
    cout<<"传递后x的值为: "<<x<<endl;             /输出传递后x的值
    cout<<"引用传递: "<<endl;
    cout<<"传递前x的值为: "<<x<<endl;
    tripleByRefence(x);                                        //输出引用传递函数中的返回值
    cout<<"传递后x的值为: "<<x<<endl;           //输出传递后x的值
    return 0;
}

#include<iostream>  //预处理指令
using namespace std; //使程序可以使用程序包含的任何标准C++头文件

double tripleByValue(double count)//按值传递
{
    return count*3;//返回count的三倍值
}
double tripleByReference(double &count)//引用传递
{
    count=count*3;//把count原来值增至3倍
    return count;//返回count的值
}
int main()
{
    double count;
    cout<<"please input the count:\n";
    cin>>count;//输入count
    cout<<"tripleByValue:\n"<<tripleByValue(count)<<endl;//按值传递输出
    count=tripleByReference(count);//函数返回值修改count值
    cout<<"tripleByReference:\n"<<count<<endl;//引用传递输出
}

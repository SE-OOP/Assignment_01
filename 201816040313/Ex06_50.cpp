#include <iostream>

using namespace std;
int tripleByValue(int);//按值传递
void tripleByReference(int &);//按引用传递
int main()
{
    int count;
    std::cin >> count;//输入一个数
    std::cout << tripleByValue(count) << endl;//按值传递计算，并输出
    tripleByReference(count);//按引用传递计算
    std::cout << count << endl;//输出第二种方法的值
    return 0;
}
int tripleByValue(int n)
{
    return n=3*n;//调用方的参数未修改
}
void tripleByReference(int &n)
{
    n=3*n;//调用方的参数修改
}

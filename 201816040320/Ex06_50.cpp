#include <iostream>

using namespace std;
int tripleByValue(int a);
int tripleByReference(int &a);

int main()
{
    int a;
    cout <<"请输入一个整数\n";
    cin >> a;//录入a
    tripleByValue(a);//按值传递a
    cout << "更新后的值为：" << a << "\n\n";//输出a

    cout <<"请再次输入一个整数\n";
    cin >> a;//更新a
    tripleByReference(a);//传引用
    cout << "更新后的值为：" << a << "\n\n" << endl;//输出a
    return 0;
}

int tripleByValue(int a)
{
    a=a*3;
    return a;
}//按值传递参数

int tripleByReference(int &a)
{
    a=a*3;
    return a;
}//通过引用传参数

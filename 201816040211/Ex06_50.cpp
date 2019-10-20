#include <iostream>

using namespace std;

int tripleByVaule(int);
void tripleByReference( int &);

int main()
{
    int a;
    cin>>a;               //输入一个数
    cout<<"a= "<< a << " before tripleByVaule\n";
    cout<<"Value returned by tripleByVaule: "
        << tripleByVaule(a)<<endl;// 实现tripleByVaule函数
    cout<<"a = "<< a <<" after tripleByVaule\n"<<endl;
    cout<<"a = "<< a <<" before tripleByReference "<<endl;
    tripleByReference(a);//实现tripleByReference 函数
    cout<<"a = "<< a<<" after tripleByReference "<< endl;
}
int tripleByVaule(int number)             //按值传递
{
    return number = number * 3;
}

void tripleByReference(int &number)   //按引用传递
{
    number = number * 3;
}

#include <iostream>

using namespace std;

int tripleByVaule(int);
void tripleByReference( int &);

int main()
{
    int a;
    cout<<"Enter a value for count:";
    cin>>a;   //输入一个数
    cout<<"\n";
    cout<<"\n";
    cout<<"Value of a before call to tripleByValue() is:"<< a <<endl;
    cout<<"Value returned by tripleByVaule: "
        << tripleByVaule(a)<<endl;// 实现tripleByVaule函数
    cout<<"Value of a (in main) after tripleCallByValue() is: "<< a <<endl;
    cout<<"\n";
    cout<<"\n";
    cout<<"Value of a before call to tripleByReference() is: "<< a <<endl;
    tripleByReference(a);//实现tripleByReference 函数
    cout<<"Value of a (in main) after call to tripleByReference() is:"<< a<< endl;
}
int tripleByVaule(int number)             //按值传递
{
    return number = number * 3;
}

void tripleByReference(int &number)   //按引用传递
{
    number = number * 3;
}

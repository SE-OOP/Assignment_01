#include <iostream>

using namespace std;

int tripleByValue( int x );        //按值传递函数
void tripleByReferencce( int *x );  //按引用传递函数

int main()
{
    int x,a;
    cout<<"Enter a value for count: ";
    cin>>x;   //输入数值
    a=x;      //保存初始输入数值
    cout<<endl;
    cout<<"Value of count before call to tripleByValue() is: "<< x <<endl;
    x=tripleByValue( x );   //引用函数修改数值（按值传递）
    cout<<"Value returned from tripleByValue() is: "<< x <<endl;
    x=a;      //更新为初始输入数值
    cout<<"Value of count (int main) after tripleCallByValue() is: "<< x <<endl<<endl;
    cout<<"Value of count before call to tripleByReference() is: "<< x <<endl;
    tripleByReferencce( &x );  //引用函数修改数值（按引用传递）
    cout<<"Value of count (int main) after call to tripleByReference() is :"<< x <<endl;

    return 0;
}

int tripleByValue( int x)//按值传递函数
{
    return x*3;
}
void tripleByReferencce(int *x )//按引用传递函数
{
    *x=*x * 3;
}

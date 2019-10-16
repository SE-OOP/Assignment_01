#include <iostream>

using namespace std;

int tripleByValue(int);
void tripleByReference(int &);
int main()
{
    int count;
    cin>>count;                                                                   

    cout <<"Value of count before call to tripleByValue() is:"<<count<<endl;      //调用前count值
    tripleByValue(count);                                                          //调用tripleByValue函数
    cout <<"Value returned from tripleByValue() is:"<<tripleByValue(count)<<endl;   //调用后count副本值
    cout <<"Value of count (in main) after tripleCallByValue() is: "<<count<<endl;   //调用后count值

    cout <<"Value of count before call to tripleByReference() is: "<<count<<endl;     //调用前count值
    tripleByReference(count);                                                          //调用tripleByReference函数
    cout <<"Value of count (in main) after call to tripleByReference() is:" <<count<< endl; //调用后count值
    return 0;
}

int tripleByValue(int x)                                                //按值传递count的副本
{
    x=x*3;
    return x;
}

void tripleByReference(int &y)                                           //引用参数按引用传递计数
{
    y=y*3;
}

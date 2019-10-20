#include <iostream>

using namespace std;

int tripleByValue(int count);
void tripleByReference(int & r);

int main()
{
    int count;

    cout<<"Enter a value for count: ";
    cin>>count;//输入count的值
    cout <<endl;

    int & r=count;

    cout<<"Value of count before call to tripleByValue() is:";
    cout<<count<<endl;//输出count最初的值
    cout<<"Value returned from tripleByValue() is:";
    cout<<tripleByValue(count)<<endl;//输出count经过三倍化后返回的新值
    cout<<"Value of count (in main) after tripleCallByValue() is:";
    cout<<count<<endl<<endl;//输出调用了函数tripleByValue后count的值

    cout<<"Value of count before call to tripleByReference() is:";
    cout<<count<<endl;//输出调用了函数tripleByReference前count的值
    tripleByReference(r);
    cout<<"Value of count (in main) after call to tripleByReference() is:";
    cout<<count;//输出调用了函数tripleByReference后count的值
    return 0;
}
int tripleByValue(int count)//按值传递
{
    count = count*3;
    return count;
}
void tripleByReference(int & r)//按引用传递
{
    r=3*r;
}

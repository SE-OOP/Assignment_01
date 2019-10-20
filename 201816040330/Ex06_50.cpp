#include <iostream>

using namespace std;

int tripleByValue (int count)//正常的函数
{

    return count*3;
}

int  tripleByReference(int &a)//有引用的函数
{

     return a*3;
}

int main()
{
    int count;

    cout<<"Enter a value for count:";//从这里输入一个数
    cin>>count;//读取这个数
    cout<<endl<<endl;
    cout<<"Value of count before call to tripleByValue() is:"<<count<<endl;//调用第一个函数之前的数字
    cout<<"Value returned from tripleByValue() is:"<<tripleByValue (count)<<endl;//显示第一个函数的返回值
    cout<<"Value of count (in main) after tripleCallByValue() is: "<<count<<endl<<endl;//调用第一个函数之后的结果
    cout<<"Value of count before call to tripleByReference() is:  "<<count<<endl;//调用第二个函数之前
    cout<<"Value of count (in main) after call to tripleByReference() is: "<<tripleByReference(count)<<endl;//调用第二个函数之后的结果
    return 0;
}

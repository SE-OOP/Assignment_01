#include <iostream>

using namespace std;

int TripleByValue(int);
void TripleByReference(int &);
int main()
{
    int count=10;//定义count去使用TripleByValue，TripleByReference函数
    //验证TripleByValue函数
    cout<<"Enter a value for count:"<<count<<endl<<endl;
    cout<<"Value of count before call to tripleByValue() is: "<<count<<endl;
    cout<<"Value returned from tripleByValue() is:"<<TripleByValue(count)<<endl;
    //验证TripleByReference函数
    cout<<"Value of count (in main) after tripleCallByValue() is:"<<count<<endl<<endl;
    cout<<"Value of count before call to tripleByReference() is: "<<count<<endl;
    TripleByReference(count);
    cout<<"Value of count (in main) after call to tripleByReference() is:"<<count<<endl;
    return 0;
}//结束main函数
//将count传入函数中，函数中x为int函数中为形参，所以返回的值不会改变main函数里的count值
int TripleByValue(int x)
{
    return x=x*3;
}
//这个函数使用了引用形参，它在函数中改变了结果，也同样改变了main函数中的结果
void TripleByReference(int &x)
{
    x=x*3;
}

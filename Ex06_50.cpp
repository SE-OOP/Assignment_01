#include <iostream>

using namespace std;
int TripleByValue(int num1);
void TripleByReference(int &);

int main()
{
    int x;
    cout << "Enter a value for count:";
    cin >>x;//输入x
    cout <<"\n"<<endl;
    cout<<"Value of count before call to tripleByValue is:"<<x<<endl;
    cout<<"Value returned from tripleByValue() is:"<<TripleByValue(x)<<endl;
    cout<<"Value of count (in main) after tripleCallByValue() is: "<<x<<endl;
    cout <<"\n"<<endl;
    cout<<"Value of count before call to tripleByReference() is: "<<x<<endl;
    TripleByReference(x);
    cout<<"Value of count (in main) after call to tripleByReference() is:"<<x<<endl;
    return 0;
}
int TripleByValue(int num1)//通过按值传递传递了x的一份副本，把该副本的值增至3倍并返回
{
    return num1*3;
}

void TripleByReference(int &num2)//通过一个引用参数来对x进行按引用传递，通过别名把x原来的值增至3倍
{
    num2*=3;
}

#include <iostream>

using namespace std;

int tripleByvalue(int x)
{
    x = x *3;
    return x;
}
int* tripeByReference(int &x)
{
    x = x*3;
    return &x;
}
int main()
{
    int x;
    int y;
    cout <<"Enter a value for count:";

    cin >> x;
    cout <<"Value of count before call to tripleByValue is:"<<x<<"\n";
    y = tripleByvalue(x);   //按值传递返回新值
    cout <<"Value returned from tripleByValue() is: "<<y<<"\n";
    cout <<"Value of count (in main) after tripleCallByValue() is"<<x<<"\n";
    cout <<"Value of count before call to tripleByReference() is:"<<x<<"\n";
    tripeByReference(x); //按参数传递则在原变量的地方更改
    cout <<"Value of count (in main) after call to tripleByReference() is:"<<x<<"\n";

}

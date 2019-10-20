#include <iostream>

using namespace std;
int tripleByValue(int);//function prototype
void tripleByReference(int &);//function prototype

int main()
{
    int a,b;//定义参数
    //对tripleByValue函数
    cout <<"Enter a value for count:";
    cin >> a;
    cin >> b;
    cout <<"Value of count before call to tripleByValue() is:"<<a<<endl;
    cout <<"Value returned from tripleByValue() is:"<<tripleByValue(a)<<endl;
    //cout <<"Value of count (in main) after tripleCallByValue() is:"<<count<<endl;

    //对tripleByReferences参数
    cout <<"Value of count before call to tripleByReference() is:"<<b<<endl;
    tripleByReference(b);
    cout <<"Value of count (in main) after call to tripleByReference() is:"<<b<<endl;
    return 0;
}
//按值传递
int tripleByValue(int a)
{
  return a=a*a*a;

}
//按引用传递
void  tripleByReference(int &b)
{
    b=b*b*b;
}

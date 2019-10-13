#include <iostream>

using namespace std;
int tripleByValue(int a)//按值传递
{
   return a*=3;
}
void tripleByReference(int &a)//引用传递
{
    a*=3;
}
int main()
{
    int count;
    cout<<"Enter a value for count:";
    cin>>count;//输入变量count的值
    cout<<endl;
    cout<<"Value of count before call to tripleByValue() is:"<<count<<endl;
    cout<<"tripleByValue:"<<tripleByValue(count)<<endl;//打印a的值
    cout<<"Value of count (in main) after tripleCallByValue() is:"<<count<<endl;
    cout<<endl;
    cout<<"Value of count before call to tripleByReference() is:"<<count<<endl;
    tripleByReference(count);
    cout<<"Value of count (in main) after call to tripleByReference() is:"<<count;//打印count的值

    return 0;
}

#include <iostream>

using namespace std;
int tripleByValue(int);//function prototype
void tripleByReference(int &);//function prototype

int main()
{
    int count,count2;//定义参数
    //对tripleByValue函数
    cout <<"Enter a value for count:";
    cin >> count;
    cin >> count2;
    cout <<"Value of count before call to tripleByValue() is:"<<count<<endl;
    cout <<"Value returned from tripleByValue() is:"<<tripleByValue(count)<<endl;
    cout <<"Value of count (in main) after tripleCallByValue() is:"<<count<<endl;

    //对tripleByReferences参数
    cout <<"Value of count before call to tripleByReference() is:"<<count2<<endl;
    tripleByReference(count2);
    cout <<"Value of count (in main) after call to tripleByReference() is:"<<count2<<endl;
    return 0;
}
//按值传递
int tripleByValue(int count)
{
  return count=count*count*count;

}
//按引用传递
void  tripleByReference(int &count2)
{
    count2=count2*count2*count2;
}

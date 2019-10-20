#include<iostream>
using namespace std;
int tripleByValue(int );
void tripleByReference(int &);
int main()
{
    int count=0;
    cout << "Enter a value for count: ";//输入一个数count
    cin >> count;
    cout << endl <<"Value of count before call to tripleByValue() is: " << count <<endl;//运行tripleByValue()前count的值
    cout<<"Value returned from tripleByValue() is: " << tripleByValue(count)<<endl ;//运行函数tripleByValue()的结果
    cout << "Value of count (in main) after tripleCallByValue() is: " << count << endl << endl;//运行tripleByValue()后count的值
    cout <<"Value of count before call to tripleByReference() is: "<< count << endl;//运行tripleByReference()函数前count的值
    tripleByReference(count);
    cout <<"Value of count (in main) after call to tripleByReference() is: " << count;//运行后count的结果
    return 0;
}
int tripleByValue(int acc)
{
    return acc*3;
}
void tripleByReference(int &acc)//引用
{
    acc*=3;
}

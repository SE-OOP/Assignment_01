#include <iostream>

using namespace std;

//传值函数模板
template < typename T >
T tripleByValue( T value);
//引用函数模板
template < typename T >
void tripleByReference( T &value);

int main()
{
    int count1,temp1;
    double count2,temp2;

    //获取输入
    cout << "Enter a value for (int)count:" <<endl;
    cin >> count1;

    //计算
    cout << "Value of count before call to tripleByValue() is: " << count1 <<endl;
    temp1=tripleByValue(count1);
    cout << "Value returned from tripleByValue() is:" << temp1 <<endl;
    cout << "Value of count (in main) after tripleCallByValue() is: " << count1 <<endl;
    cout << "Value of count before call to tripleByReference() is: " << count1 <<endl;
    tripleByReference(count1);//用temp接收返回值，count值不会改变
    cout << "Value of count (in main) after call to tripleByReference() is: " << count1 <<endl;

    //获取输入
    cout << "Enter a value for (double)count:" <<endl;
    cin >> count2;

    //计算
    cout << "Value of count before call to tripleByValue() is: " << count2 <<endl;
    temp2=tripleByValue(count2);
    cout << "Value returned from tripleByValue() is:" << temp2 <<endl;
    cout << "Value of count (in main) after tripleCallByValue() is: " << count2 <<endl;
    cout << "Value of count before call to tripleByReference() is: " << count2 <<endl;
    tripleByReference(count2);//用temp接收返回值，count值不会改变
    cout << "Value of count (in main) after call to tripleByReference() is: " << count2 <<endl;

    return 0;
}
template < typename T >
T tripleByValue( T value)
{
    return 3*value;//由于是传值故需返回值
}

template < typename T >
void tripleByReference( T &value)
{
    value*=3;//引用无需返回
}

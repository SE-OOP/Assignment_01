#include <iostream>

using namespace std;

int tripleByValue(int value);//按值传递
void tripleByReference(int &value);//通过一个引用参数

int main()
{
    int count4;
    //cin标准输入读取数据
    cout << "Enter a value for count:" ;
    cin >> count4;
    cout << endl;

    //按值传递
    cout << "Value of count before call to tripleByValue() is:";
    cout << count4 <<endl;
    cout << "Value returned from tripleByValue() is:";
    cout << tripleByValue(count4)<<endl;
    cout << "Value of count (in main) after tripleCallByValue() is:";
    cout << count4 <<endl;
    cout << endl;

    //通过一个引用参数
    cout << "Value of count before call to tripleByReference() is:";
    cout << count4 <<endl;
    cout << "Value of count (in main) after call to tripleByReference() is:";
    tripleByReference(count4);
    cout<<count4<<endl;

    return 0;
}

//按值传递
int tripleByValue(int value)
{
    return value*3;
}
//通过一个引用参数
void tripleByReference(int &value)
{
    value*=3;
}

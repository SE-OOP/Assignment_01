#include <iostream>
using namespace std;
int tripleByValue(int m) //按值传递
{
    return (m * 3);
}
void tripleByReference(int &n) //按引用传递
{
    n = 3 * n;
}

int main()
{
    int count = 0;
    cout << "Enter a value for count: ";
    cin >> count;  //从屏幕读入一个数字
    cout << "Value of count before call to tripleByValue() is: " << count << endl;  //输出调用tripleByValue()函数前的结果
    cout << "Value returned from tripleByValue() is:" << (tripleByValue(count)) << endl;  //调用tripleByValue()函数
    cout << "Value of count before call to tripleByReference() is: " << count << endl;  //输出调用tripleByReference()函数前的结果
    tripleByReference(count);  //调用按引用传递函数
    cout << "Value of count (in main) after call to tripleByReference() is: " << count << endl;
    return 0;
}

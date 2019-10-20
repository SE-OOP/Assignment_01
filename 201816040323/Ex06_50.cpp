#include <iostream>

using namespace std;

int tripleByValue(int a);//按值传递
void tripleByReference(int &b);//按引用传递
int main()
{
    int count;
    cout << "Enter a value for count:"  ;
    cin >> count; //输入初始值
    cout << "\n" << endl;
    cout << "Value of count before call to tripleByValue() is:" << count << endl;
    cout << "Value returned from tripleByValue() is:" << tripleByValue(count) << endl;
    cout << "Value of count (in main) after tripleCallByValue() is:" << count << "\n" << endl;

    cout << "Value of count before call to tripleByReference() is:" << count << endl;
    tripleByReference(count);
    cout << "Value of count (in main) after call to tripleByReference() is:" << count << endl;
    return 0;
}
int tripleByValue(int a)
{
    return a*3;
}
void tripleByReference(int &b)
{
    b=b*3;
}

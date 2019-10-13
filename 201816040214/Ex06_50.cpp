#include <iostream>

using namespace std;

double tripleValue(double);
void tripleByReference(double &);

int main()
{
    double count;
    //定义一个double型变量，并输入该值
    cout << "Enter a value for count: " << endl;
    cin >> count;
    cout << "Value of count before call to tripleByValue() is:" << count << endl;//输出传进函数前的值
    cout << "Value returned from tripleByValue() is:" << tripleValue(count) << endl;//输出函数中返回的新值
    cout << "Value of count (in main) after tripleCallByValue() is:" << count << endl;//输出一开始输入的值

    cout << "\n" << endl;
    cout << "Value of count before call to tripleByReference() is:" << count << endl;//输出传进函数前的值
    tripleByReference(count);
    cout << "Value of count (in main) after call to tripleByReference() is:" << count << endl;//执行函数后，输出传进函数前的变量值
    return 0;
}

//函数TripleByValue按值传递副本，将副本加倍，并返回新值
double tripleValue(double count){
    return count*3;
}

//函数tribByReference，通过引用参数按引用传递count，并通过其别名（即，引用参数）将count的原始值增大三倍）
void tripleByReference(double &count){
    count *= 3;
}

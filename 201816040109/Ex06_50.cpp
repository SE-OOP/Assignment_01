#include <iostream>

using namespace std;

int tripleByValue(int flag);        //声明tripleByValue函数

void tripleByReference(int &flag);  //声明tripleByReference函数

int main() {

    int count = 0;
    cout << "Enter a value for count: ";
    cin >> count;
    cout << "Value of count before call to tripleByValue() is: " << count << endl;
    cout << "Value returned from tripleByValue() is: " << tripleByValue(count) << endl;
    cout << "Value of count (in main) after tripleCallByValue() is: " << count << endl;
    cout << "Value of count before call to tripleByReference() is: " << count << endl;
    tripleByReference(count);
    cout << "Value of count (in main) after call to tripleByReference() is: " << count << endl;
    return 0;
}

int tripleByValue(int flag) {
    return flag * 3;                //返回传入参数三倍的值
}

void tripleByReference(int &flag) {
    flag = flag * 3;                //通过引用参数flag将count变为原来的三倍
}

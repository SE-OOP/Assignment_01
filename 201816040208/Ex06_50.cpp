#include <iostream>
using namespace std;

int TripleByValue(int num){    //按值传递
    num *= 3;
    return num;
}

void TripleByReference(int &num){   //按引用传递
    num *= 3;
    return ;
}

int main() {
    int count;  //待输入的值
    int a;  //函数返回新值

    cout << "Enter a value for count: ";
    cin >> count;

    cout << endl << "Value of count before call to tripleByValue() is: " << count << endl;
    a = TripleByValue(count);   //调用按值传递函数
    cout << "Value returned from tripleByValue() is: " << a << endl;
    cout << "Value of count (in main) after tripleCallByValue() is: " << count << endl << endl;

    cout << "Value of count before call to tripleByReference() is: " << count << endl;
    TripleByReference(count);   //调用按引用传递函数
    cout << "Value of count (in main) after call to tripleByReference() is: " << count << endl;

    return 0;
}

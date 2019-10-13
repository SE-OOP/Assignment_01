#include <iostream>

using namespace std;

int tripleByValue(int flag);        //声明tripleByValue函数

void tripleByReference(int &flag);  //声明tripleByReference函数

int main() {

    int count = 0;
    cin >> count;                   //输入count的值
    count = tripleByValue(count);   //调用tripleByValue函数将count值变为原来的三倍
    cout << count << endl;          //输出count改变后的值
    cin >> count;                   //再次输入count的值
    int &flag = count;              //flag是一个初始化为count的整型引用
    tripleByReference(flag);        //调用tripleByReference函数
    cout << count << endl;          //输出count改变后的值
    return 0;
}

int tripleByValue(int flag) {
    return flag * 3;                //返回传入参数三倍的值
}

void tripleByReference(int &flag) {
    flag = flag * 3;                //通过引用参数flag将count变为原来的三倍
}

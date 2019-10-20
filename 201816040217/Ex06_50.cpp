#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int tripleByValue(int a);
void tripleByReference(int &a);
int main()
{
    int count = 10;


    cout<<"Enter a value for count:"<<count<<endl<<endl;
    cout<<"Value of count before call to tripleByValue() is:"<<count<<endl;
    cout<<"Value returned from tripleByValue() is:"<<tripleByValue(count)<<endl;//调用了tripleByValue函数获得返回值
    cout<<"Value of count (in main) after tripleCallByValue() is:"<<count<<endl<<endl;

    cout<<"Value of count before call to tripleByReference() is:"<<count<<endl;
    tripleByReference(count);//调用函数通过按别名传递改变count的值
    cout<<"Value of count (in main) after call to tripleByReference() is:"<<count<<endl;


    return 0;
}
int tripleByValue(int a){
    a=a*3;
    return a;
}
void tripleByReference(int &a){
    a*=3;
}

#include <iostream>

using namespace std;
int tripleByValue(int num){
    return 3*num;
}
void tripleByReference(int & num){
    num=3*num;
}

int main()
{
    int count=10;
    cout<<"请输入一个整数count:";
    cin>>count;
    cout<<"调用tripleByValue()函数之前count的值为:"<<count<<endl;
    cout<<"调用tripleByValue()函数返回的值为: "<<tripleByValue(count)<<endl;
    cout<<"调用tripleByValue()函数之后count的值为:"<<count<<endl<<endl;
    cout<<"调用tripleByReference()函数之前的count值为:"<<count<<endl;
    cout<<"调用tripleByReference()函数之后的count值为:";
    tripleByReference(count);
    cout<<count<<endl;

}

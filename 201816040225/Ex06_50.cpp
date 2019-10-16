#include<iostream>
using namespace std;
int tripleByValue(int);//声明函数
void tripleByReference(int & );//声明函数
int main()
{
    int count=0;

    cin>>count;//输入数字
    cout<<"Enter a value for count: "<<count;
    cout<<"\n\n";
    cout<<"Value of count before call to tripleByValue() is: "<<count;
    cout<<"\n";
    cout<<"Value returned from tripleByValue() is: "
    <<tripleByValue(count)<<endl;
    cout<<"Value of count (in main) after tripleCallByValue() is: "<<count;
    cout<<"\n\n";
    cout<<"Value of count before call to tripleByReference() is: "<<count;
    cout<<"\n";
    tripleByReference(count);
    cout<<"Value of count (in main) after call to tripleByReference() is: "<<count;
    cout<<"\n";
}
int tripleByValue(int number)
{
    return number=3*number;
}
void tripleByReference(int &numberRef)
{
     numberRef=3*numberRef;
}

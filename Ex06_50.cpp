#include <iostream>

using namespace std;

int triplebByValue(int);
void triplebByReference(int&);
int main()
{
   int k=7;//使用triplebyvalue的值到立方
   int n=21;//使用triplebyreference将值设置为三次方
   //演示立方值
   cout<<"k=7"<<k<<"before tripleByValue\n";
   cout<<"value return by tripleByValue:"<<triplebByValue(k)<<endl;
   cout<<"k="<<k<<"after tripleByValue\n"<<endl;

   //
   cout<<"n="<<n<<"before tripleByReference"<<endl;
   triplebByReference(n);
    cout << "n="<<n<<"after tripleByReference" <<endl;
}//end main

//triplebByValue 乘上本身储存
//产生数字并返回数字的新值
int triplebByValue(int number)
{
    return number=number*number*number;//调用方的函数未修改
}
//triplebByReference 将numberRef三次相乘并且储存结果
//再函数main中numberRef引用的变量中
void triplebByReference(int &numberRef)
{
    numberRef=numberRef*numberRef*numberRef;//调用方的参数已经修改
}

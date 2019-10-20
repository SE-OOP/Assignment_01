#include<iostream>
using namespace std;

int tripleByValue(int number);//按值传递使数字变为原来的三倍
void tripleByReference(int &numberRef);//传递引用使数字变为原来的三倍

int main()
{
	int number;
	int &numberRef = number;
	
	cout<<"请输入一个整数number:"<<endl;
	cin>>number;//输入 
	tripleByValue(number);//调用函数 
	tripleByReference(numberRef);//调用函数 
	cout<<"按值传递后得到新的数字为："<<number<<endl;
	cout<<"传递引用后得到新的数字为："<<numberRef<<endl;
	return 0;
}

int tripleByValue(int number)
{
	return number *= 3;
}

void tripleByReference(int &numberRef)
{
	numberRef *= 3;
}

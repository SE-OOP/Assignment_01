#include <iostream>
using namespace std;

double tripleByValue( double count)   //定义按值输出的函数 
 {
 	return count=count*3;
 }                   
 
 void tripleByReference( double &count)  //定义引用参数输出的函数 
 {
 	count=count*3;
 }
 
 int main()
 {
 	double countValue;
 	cin >>countValue;//输入一个初始值 
 	cout <<"初始值为countValue="<<countValue<<endl; //将初始值输出 
    cout <<"\n按值输出的结果为："<<tripleByValue(countValue)<<endl;  //按值输出 
	tripleByReference(countValue);
	cout <<"按引用参数输出的结果为："<<countValue<<endl; //按引用参数输出 
 }

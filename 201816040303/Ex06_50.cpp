#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int tripleByValue( int count2 ) { //创建副本函数 
	count2 *= 3; //count2 为 count的副本， 将count2自身乘 3 
	return count2;
} 

int tripleByReference(int* count){ //创建引用参数的函数 
	int *c;    //创建指向count地址的指针c  
	c = count;  
	*c *= 3; //C指针 指向的值乘3 
	return *c; 
}

int main(int argc, char** argv) {
	int count;
	cin >> count ;  //输入一个值 
	cout << tripleByValue(count) << endl; //用“副本法”输出该值的3倍数 
	cout << tripleByReference(&count); //用“引用参数法”输出该值的3倍数1· 
	return 0;
}

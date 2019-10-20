#include <iostream>
using namespace std;
//头文件声明
int tripleByValue(int count);
void tripleByReference(int& a);

//主函数
int main()
{
    //定义一个int类型的count变量
	int count ;
	std::cout <<" Enter a value for count:";
	//从屏幕上读入一个数字，存入count变量中
	std::cin >> count;
    //调用函数按值传递，再输出
    tripleByValue(count);
    cout << "Value of count before call to tripleByValue() is: " << count << endl;
    cout << "Value returned from tripleByValue() is: " << tripleByValue(count) << endl;
    cout << "Value of count (in main) after tripleCallByValue() is: " << count << endl;
    std::cout << "\n\n";

	//调用函数，通过一个引用参数来对count进行按引用传递
	 cout << "Value of count before call to tripleByReference() is: " << count << endl;
	 tripleByReference(count) ;
	 cout << "Value of count (in main) after tripleByReference() is: " << count << endl;
}

//传入一个数，再返回一个数
int tripleByValue(int count) {
	return 3 * count;
}

//引用类型直接改变数字中的值
void tripleByReference(int& a) {
	 a = a *3;
}

#include<iostream>//头文件
using namespace std;//可省去std::cin
int tripleByValue(int count);
void tripleByReference(int &numberRef);//定义两个函数
int tripleByValue(int count)
{
    return count=3*count;//返回经过函数的值
}
void tripleByReference(int &numberRef)
{
    numberRef=3*numberRef;
    //cout<<"numberRef="<<numberRef<<"after tripleByReference()"<<numberRef<<endl;
}
int main()
{
    int count;
    int numberRef;
    std::cout <<" Enter a value for count: ";
	//从屏幕上读入一个数字，存入count变量中
	std::cin >> count;


    cout<<"Value of count before call to tripleByValue() is: "<<count<<endl;//输出刚开始的值
    cout<<"Value returned from tripleByValue() is: "<<tripleByValue(count)<<endl;//输出传递后的值
    cout<<"Value of count (in main) after tripleCallByValue() is: " << count <<endl;//按值传递不改变该值
    std::cout << "\n\n";

    cout<<"Value of count before call to tripleByReference() is: " << count <<endl;//输出刚开始的值
    tripleByReference(count);
    cout<<"Value of count (in main) after call to tripleByReference() is: " << count <<endl;//引入参数改变原数的值

    tripleByReference(count);


}

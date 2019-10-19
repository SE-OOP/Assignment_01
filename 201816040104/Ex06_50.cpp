#include <iostream>


using namespace std;
 void tripleByValie(int a)//按值传递函数
{
	a=a+a+a;
	cout<<a<<endl;
}
void tripleByReference(int &a)//引用传递函数
{
	a=a+a+a;
	cout<<a<<endl;

}
int main()
{
    int a;
    cin>>a;//键盘输入数值a
    cout<<"按值传递：";
    tripleByValie(a);//调用按值传递函数
    cout<<"引用传递：";
    tripleByReference(a);//调用引用传递函数
}

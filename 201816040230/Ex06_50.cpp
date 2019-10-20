#include <iostream>

using namespace std;
int tripleByValue(int );//按置传递
void tripleByReference(int &);//引用传递参数
int main()
{
    int x=1;
    int y=2;
    cout<<"传递之前的结果:"<<"x="<<x<<endl;
    cout<<"返回运算的结果："<<"x="<<tripleByValue(x)<<endl;
    cout<<"传递之后的结果："<<"x="<<x<<endl;
    cout<<"引用之前的结果:"<<"y="<<y<<endl;
    tripleByReference(y);
     cout<<"引用之后的结果："<<"y="<<y<<endl;
    return 0;
}
int tripleByValue(int count)
{
    return count=count*3;
}
void tripleByReference(int &count)
{
    count=count*3;
}

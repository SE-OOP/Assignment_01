#include <iostream>

using namespace std;
int tripleByValue(int count);//按值传递函数
void tripleByReference(int &count);//按引用传递函数
int main()
{
    int count,count1;
    cin>>count;//赋值count
       count1=tripleByValue(count);//执行按值传递函数，返还结果赋值给count1
    cout<<count1<< endl;//输出count1值
       tripleByReference(count);//执行按引用传递函数
    cout<<count<<endl;//输出count值
    return 0;
}
int tripleByValue(int count)
{
    count=3*count;
    return count;
}
void tripleByReference(int &count)
{
    count=count*3;
}

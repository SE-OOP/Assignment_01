#include <iostream>
using namespace std;
int tripleByValue(int a)
{
    a*=3;
    return a;
}
void tripleByference(int *a)
{
    *a*=3;
}
int main()
{
    int num;
    int *num1;
    cin>>num;//输入待测的值
    num1=&num;
    cout <<"请输入num="<< endl;
    cout <<"as1:"<<tripleByValue(num)<<endl;//第一种情况
    tripleByference(num1);
    cout <<"as2:"<<num<<endl;//第二种情况
    return 0;
}

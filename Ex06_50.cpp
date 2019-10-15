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
    cin>>num;
    num1=&num;
    cout <<"请输入一个数num="<< endl;
    cout <<"as1:"<<tripleByValue(num)<<endl;
    tripleByference(num1);
    cout <<"as2:"<<num<<endl;
    return 0;
}

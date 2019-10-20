#include <iostream>

using namespace std;
double tripleByValue(double x)
{
    x=x*3;
    return x;
}
void tripleByReference(double &x){
    x*=3;
}
int main()
{
    cout << "请输入一个数：" << endl;
    double a;
    cin>>a;
    double r=tripleByValue(a);
    cout<<r<<endl;
    tripleByReference(a);
    cout<<a<<endl;
    return 0;
}

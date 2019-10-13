#include <iostream>

using namespace std;
int tripleByValue(int num){
    return 3*num;
}
void tripleByReference(int & num){
    num=3*num;
}

int main()
{
    int count=10;  //count的值为10
    cout<<"tripleByValue的结果:"<<tripleByValue(count)<<endl;  //用函数tripleByValue求count的3倍值
    cout<<"tripleByReference的结果:";
    tripleByReference(count);             //用函数tripleByReference求count的3倍值
    cout<<count<<endl;

}

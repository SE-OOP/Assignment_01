#include <iostream>

using namespace std;

int tripleByValue(int a)#直接将变量进行乘3
{
    a=a*3;

    return a;
}

void tripleByReference(int &a)#导入变量的地址，用指针
{
    int b;
    b=a*3;
    a=b;

}
int main()
{
    int count = 0;
    std::cin>>count;
    std::cout<<count<<"\n";
    count = tripleByValue(count);
    std::cout<<count<<"\n";
    tripleByReference(count);
    std::cout<<count;



}

#include <iostream>

using namespace std;

int tripleByValue(int x)
{
    x*=3;
    return x;
}//按值传递
void tripleByReference(int &cRef)
{
    cRef*=3;
}//按引用传递
int main()
{
    int count;
    std::cin>>count;
    std::cout<<"count="<<count<<std::endl;
    std::cout<<"data return by tripleByValue:\n"<<tripleByValue(count)<<std::endl;
    std::cout<<"count after tripleByValue:\n"<<count<<std::endl;//count不变
    std::cout<<"count before tripleByReference:\n"<<count<<std::endl;
    tripleByReference(count);
    std::cout<<"count after tripleByReference:\n"<<count<<std::endl;//count改变
    return 0;
}//没了

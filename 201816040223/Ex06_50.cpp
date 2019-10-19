#include <iostream>

using namespace std;
void fun(int& a);
int main()
{
    int count;
    cin >> count;
    fun(count);
    cout    << count<< endl;
    return 0;
}
void fun(int& a)
{
    int temp;
    temp=a;
    a=a*a*a;
    return;

}

#include <iostream>

using namespace std;
int tripleByValue(int a)    //按值传递
{
    return a*3;
}
void tripleByReference(int &a)  //引用传递
{
    a*=3;
}
int main()
{
    int count=22;

    cout <<"按值传递:"<<tripleByValue(count)<< endl;

    tripleByReference(count);
    cout <<"引用传递:"<<count<< endl;
    return 0;
}

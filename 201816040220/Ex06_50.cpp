#include <iostream>

using namespace std;

int tripleByValue(int);
void tripleByReference(int &);
int main()
{
    int count=1;

    tripleByValue(count);
    cout << tripleByValue(count)<<endl;

    tripleByReference(count);
    cout << count<< endl;
    return 0;
}

int tripleByValue(int x)
{
    x=x*3;
    return x;
}

void tripleByReference(int &y)
{
    y=y*3;
}

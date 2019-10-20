#include <iostream>
using namespace std;

int tripleByValue(int m)
{
    m=3*m;

    return m;
}

void tripleByReference(int &m)
{
    int n;
    n=3*m;
    m=n;

}
int main()
{
    int count1 = 0,count2 = 0;

    cin >> count1;

    count2 =tripleByValue(count1);
    cout<<count2<<endl;

    tripleByReference(count1);
    cout<<count1<<endl;

    return 0;
}

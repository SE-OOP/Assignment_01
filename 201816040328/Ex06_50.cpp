#include <iostream>

using namespace std;

int tripleByValue (int a);
void tripleByReference(int &);

int main()
{
    int count;
    cout<<"Enter a value for count:";
    cin>>count;
    cout<<endl;
    cout<<"Value of count before call to tripleByValue() is:"<<count;
    cout<<"\n";
    cout<<"Value returned from tripleByValue() is:"<<tripleByValue(count);
    cout<<"\n";
    cout<<"Value of count (in main) after tripleCallByValue() is:"<<count<<endl;
    cout<<endl;
    cout<<"Value of count before call to tripleByReference() is: " <<count;
    cout<<"\n";
    tripleByReference(count);
    cout<<"Value of count (in main) after call to tripleByReference() is:"<<count;
    return 0;
}
int tripleByValue(int a)
{
    a=a*3;
    return a;
}

void tripleByReference(int &aRef)
{
    aRef=aRef*3;
}

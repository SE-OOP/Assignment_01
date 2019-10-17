#include <iostream>

using namespace std;

int tripleByValue(int a)
{
    a=a*3;

    return a;
}

void tripleByReference(int &a)
{
    int b;
    b=a*3;
    a=b;

}
int main()
{
    int count1 = 0,count2=0;

    cout<<"Enter a value for count: ";
    cin >> count1;

    cout<<"Value of count before call to tripleByValue() is:"<<count1<< endl;
    count2 =tripleByValue(count1);
    cout<<"Value returned from tripleByValue() is: "<<count2<<endl;
    cout<<"Value of count (in main) after tripleCallByValue() is:"<<count1<<endl;

    cout<<"Value of count before call to tripleByReference() is: "<<count1<<endl;
    tripleByReference(count1);
    cout<<"Value of count (in main) after call to tripleByReference() is: "<<count1<<endl;

    return 0;
}

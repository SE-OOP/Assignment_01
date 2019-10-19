#include <iostream>

using namespace std;

int tripleByValue(int number);//按值传递
void tripleByReference(int &number1);//按引用传递实参

int main()
{
    int x;//设置变量


    cout<<"Enter a value for count:";
    cin>>x;

    cout<<"Value of count before call to tripleByValue() is:  "<<x<<"\n";

    cout<<"Value returned from tripleByValue() is: "
    <<tripleByValue(x)<<endl;

    cout<<"Value of count (in main) after tripleCallByValue() is: "<<x<<"\n";

    cout<<"Value of count before call to tripleByReference() is: "<<x<<"\n";

    cout<<"Value of count (in main) after call to tripleByReference() is: ";
    tripleByReference(x);
    cout << x << endl;

    return 0;
}
int tripleByValue(int number)
{
    return number=number*3;
}
void tripleByReference(int &number1)
{
    number1=number1*3;
}

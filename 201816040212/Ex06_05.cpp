#include <iostream>

using namespace std;
int tripleByValue( int );
void tripleByReference( int & );

//传参
int tripleByValue(int fuck)
{
    return fuck*3;
}
//引用
void tripleByReference(int &qwq)
{
    qwq=3*qwq;
}
int main()
{
    int  qqq;
    cout << "Enter a value for count: ";
    cin>>qqq;
    cout << "Value of count before call to tripleByValue() is:" << qqq <<endl;
    cout << " Value returned from tripleByValue() is: "<<tripleByValue( qqq ) << endl;
    cout << " Value of count (in main) after tripleCallByValue() is: " << qqq << endl;

    cout << " Value of count before call to tripleByReference() is: " << qqq << endl;
    tripleByReference(qqq);
    cout << " Value of count (in main) after call to tripleByReference() is: " <<  qqq << endl;

}

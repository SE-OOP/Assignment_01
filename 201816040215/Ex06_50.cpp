#include <iostream>

using namespace std;
int tripleByValue( int );
void tripleByReference( int & );


int tripleByValue(int number)
{
    return number*3;
}
void tripleByReference(int &number)
{
    number=3*number;//实现扩大3倍
}
int main()
{
    int  number;
    cout << "Enter a value for count: ";
    cin>>number;
    cout << "Value of count before call to tripleByValue() is:" << number <<endl;
    cout << " Value returned from tripleByValue() is: "<<tripleByValue( number ) << endl;
    cout << " Value of count (in main) after tripleCallByValue() is: " << number << endl;

    cout << " Value of count before call to tripleByReference() is: " << number << endl;
    tripleByReference(number);
    cout << " Value of count (in main) after call to tripleByReference() is: " <<  number << endl;

}

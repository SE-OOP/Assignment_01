#include <iostream>
using namespace std;
void change ( int & );
int dischange ( int  );
int main()
{
    int x = 2 ;
    int z = 4 ;
    cout << "运算前" << endl;
    cout << "x = " << x << endl;
    cout << "z = " << z << endl;
    dischange ( x );
    change ( z );
    cout << "运算后" << endl;
    cout << "x = " << x << endl;
    cout << "z = " << z << endl;
    return 0;
}

int dischange ( int number1 )
{
    return number1 *= number1;
}

void change ( int &number2 )
{
    number2 *= number2;
}

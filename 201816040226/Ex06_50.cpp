#include <iostream>

using namespace std;

int tripleByValue(int);//function prototype(value pass)
void tripleByReference(int &);//function prototype(reference pass)

int main()
{
    int x;//value to triple using tripleByValue and tripleByReference
    cin >> x ;
//demonstrate tripleByValue
    cout << x << " before\n" <<endl;
    cout <<" value returned by  tripleByValue " <<tripleByValue( x ) << endl;
    cout << x <<" after\n"<< endl;
    //cout << x << endl;
//demonstrate tripleByReference
    cout << x << " before\n"<< endl;
     tripleByReference( x );
    cout << x <<" after\n"<< endl;
}//end main

    int tripleByValue( int number )
    {
        return number *= 3;
    }//end function tripleByValue
void tripleByReference( int &numberRef )
{
    numberRef *= 3;
}//end function tripleByReference

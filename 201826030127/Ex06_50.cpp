#include<iostream>
using namespace std;

int tripleByValue(int); //function prototype(Value pass)
void tripleByReference(int &);//function prototype(reference pass)

int main()
{
    int count;

    cin >> count;
    cout << "count=" << count << " before tripleByValue\n" << endl;
    cout << "Value returned by tripleByValue:" << tripleByValue(count) << endl;
    cout << "count=" << count << " after tripleByValue" << endl;


    cout << "count=" << count << " before tripleByReference" << endl;
    tripleByReference(count);
    cout << "after tripleByReference:" << count << endl;
}


int tripleByValue(int number)
{
    return 3*number;
}//end function tripleByValue


void tripleByReference(int &numberRef)
{
    numberRef = 3 * numberRef;
}//end function tripleByReference








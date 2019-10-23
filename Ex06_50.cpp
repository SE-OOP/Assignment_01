#include <iostream>
//Passing arguments by value and by reference
using namespace std;

int tripleByValue(int);
void tripleByReference(int &);

int main()
{
    int count = 2;//value to triple

    //demonstrate tripleByReference
    cout<<"count = "<<count<<" before tripleByReference\n";
    tripleByReference(count);
    cout<<"count = "<<count<<" after tripleByReference\n";
    cout<<"\n";

    //demonstrate tripleByValue
    cout<<"count = "<<count<<" before tripleByValue\n";
    cout<<"Value returned by tripleByValue: "<<tripleByValue(count)<<endl;
    cout<<"count = "<<count<<" after tripleByValue"<<endl;
}//end main

//tripleByValue multiplies number by itself, stores the
//result in number and returns the new value of number
int tripleByValue(int number)
{
    return number * number * number;//caller's argument not modified
}//end function tripleByValue

//tripleByReference multiplies numberRef by itself and stores the result
//in the variable to which numberRef refer in function main
void tripleByReference(int &numberRef)
{
    numberRef = numberRef * numberRef * numberRef;//caller's argument modified
}//end function tripleByReference



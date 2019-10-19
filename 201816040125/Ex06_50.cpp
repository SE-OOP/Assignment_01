#include <iostream>

using namespace std;

int TripleByValue(int);          //function prototype(value pass)
void TripleByReference(int&);       //function prototype(reference pass)
int main()
{
    int x=1;                         //value to triple using TripleByValue
    int z=4;                         //value to triple using TripleByReference
    //demonstrate TripleByValue
    cout<<"x="<<x<<"before TripleByValue\n";
    cout<<"Value returned by TripleByValue:"<<TripleByValue(x)<<endl;
    cout<<"x="<<x<<"after TripleByValue\n"<<endl;       //output the value of x

    //demonstrate TripleByReference
    cout<<"z="<<z<<"before TripleByReference\n"<<endl;
    TripleByReference(z);
    cout<<"Value returned by TripleByReference: "<<z<<endl;
    cout<<"z="<<z<<"after TripleByReference\n"<<endl;        //output the value of z
    return 0;
}

int TripleByValue(int number)
{
    return number=number*3;
}

void TripleByReference(int &numberRef)
{
    numberRef=numberRef*3;
}

#include <iostream>

using namespace std;

int tripleByValue(int);//pass-by-value
void tripleByReference(int & );//pass-by-reference

int main()
{
    int count;

    cout<<"Enter a value for count:";
    cin>>count;


    cout<<"Value of count before call to tripleByValue() is:"<<count<<endl;
    cout<<"Value returned from tripleByValue() is:"<<tripleByValue(count)<<endl;//打印调用tripleByValue()函数后的值
    cout<<"Value of count (in main) after tripleCallByValue() is"<<count<<endl<<endl;//打印调用tripleByValue()函数后的形参的值

    cout<<"Value of count before call to tripleByReference() is:"<<count<<endl;
    cout<<"Value of count (in main) after call to tripleByReference() is:"<<count<<endl;//打印调用tripleByReference()后的count的值

    return 0;
}

int tripleByValue(int count)
{
    return count = count*3;//caller's argument not modified
}//end function tripleByValue

void tripleByReference(int &count)
{
    count =3*count;//caller's argument modified
}

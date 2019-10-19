#include <iostream>

using namespace std;
int tripleByValue(int);
int tripleByReference(int &);

int main()
{
    int count;
    cout <<"Enter a value for count:";
    cin >>count;
    cout <<"Value of count before call to tripleByValue() is:"<<count<<endl;
    cout <<"Value of count (in main) after tripleCallByValue() is:"<<tripleByValue(count)<<endl;
    cout <<"Value of count before call to tripleByReference() is:"<<count<<endl;
    cout <<"Value of count (in main) after call to tripleByReference() is:"<<tripleByReference(&count)<<endl;
    return 0;
}
int tripleByValue(int count)
{
    count=count*count*count;
    cout <<"Value returned from tripleByValue() is:"<<count<<endl;
}
int  tripleByReference(int &count)
{
    return count=count*count*count;
}

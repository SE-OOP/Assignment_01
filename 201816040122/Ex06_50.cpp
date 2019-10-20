#include <iostream>

using namespace std;
double tripleByValue( double x) 
{
    x=x+x+x;
    return x;
}
double tripleByReference(double &x)
{
    x=x+x+x;
}
int main()
{
    double a,s;
    cin >> a; //input the value of count
    if(!cin)  //judgment the type of value 
    {
        cout <<"the wrong input"; //if the type of value is not double,prompt error
        return 0;
    }
    cout<<"pass by value:";
    s=tripleByValue(a);
    cout << "the value of original count is "<<a<<endl; //after pass by value,output the value of count
    cout << "the three times of count is " << s << endl; //after pass by value,output the result 
    cout << "pass by reference:";
    tripleByReference(a);
    cout << "passing by reference,the value of original count has changed,now the count is "<<a<<endl; //after paa by reference,output the result
    
    return 0;
}

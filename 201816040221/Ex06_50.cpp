#include <iostream>

using namespace std;
int tripleByValue(int );//function prototype (value pass0
void tripleByReference(int & );//function prototype (reference pass)

int main()
{
    int m=0; //value to triple using tripleByValue
    //int n=0; //value to triple using tripleByReference

    cout<<"enter a value for count: ";
    cin>>m;

    /*cout<<"enter the n: ";
    cin>>n;*/
    cout<<"\n\n\n";
    //demonstrate tripleByValue
    cout<<"vaue of count before call to tripleByValue()is:"<<m<<endl;//输出没有经过tripleByValue的m值
    cout<<"\n";
    cout<<"Value returned from tripleByValue:"<< tripleByValue(m)<<endl;//输出经过tripleByValue的m值
    cout<<"\n";
    cout<<" after tripleByValue: "<<m<<endl;
    cout<<"\n";
    //demonsstrate tripleByReference
    cout<<" before tripleByReference"<<m<<endl;
    cout<<"\n";
    tripleByReference(m);//调用函数tripleByReference
    cout<<" after tripByReference(n): "<<m<<endl;


    return 0;
}//end main
int tripleByValue(int m)
{

    return m=m*3;//返回数值m

}
void tripleByReference(int &numberRef)
{
    numberRef=numberRef*3;

}

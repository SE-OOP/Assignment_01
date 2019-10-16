#include <iostream>

using namespace std;

int tripleByValue(int);//pass-by-value
void tripleByReference(int & );//pass-by-reference

int main()
{
    int count1,count2;

    cin>>count1;
    cin>>count2;

    cout<<"count1="<<count1<<"  before tripleByValue\n";
    cout<<tripleByValue(count1)<<endl;
    cout<<"count1="<<count1<<"  after tripleByValue\n"<<endl;

    cout<<"count2="<<count2<<"  before ripleByReferencee\n";
    tripleByReference(count2);
    cout<<"count2="<<count2<<"  after ripleByReference\n"<<endl;

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

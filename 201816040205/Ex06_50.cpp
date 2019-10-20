#include <iostream>

using namespace std;

int tripleByValue(int x)//按值传递
{
    int t;
    t=3*x;
    return t;
}


void tripleByReference(int &x)//按引用传递

{

    x=3*x;
}


int main()
{
   int count;
   cin>>count;
   int &x=count;//引用count
   tripleByValue(count);
   cout<<count<<endl;

   tripleByReference(x);
   cout<<count;








}

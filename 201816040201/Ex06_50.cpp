#include <iostream>

using namespace std;
int tripleByValue(int x)
{
    return x*=3;
}
void tripleReference(int &cnt)
{
     cnt*=3;
}
int main()
{
  int cnt;
  cin>>cnt;
  int &ocnt=cnt;
  cout<<"cnt:"<<cnt<<" "<<"tripleByValue:"<<  tripleByValue(cnt)<<endl;

     tripleReference(cnt);
   cout<<"tripleReference:"<<cnt <<" "<<"cnt:"<<cnt<<endl;

    return 0;
}

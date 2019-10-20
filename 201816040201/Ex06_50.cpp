#include <iostream>

using namespace std;
int tripleByValue(int x)//传值
{
    return x*=3;
}
void tripleReference(int &cnt)//引用
{
     cnt*=3;
}
int main()
{
  int cnt;
  cin>>cnt;//输入
  int &ocnt=cnt;
  cout<<"cnt:"<<cnt<<" "<<"tripleByValue:"<<  tripleByValue(cnt)<<endl;//传值后两个数的大小

     tripleReference(cnt);
   cout<<"tripleReference:"<<cnt <<" "<<"cnt:"<<cnt<<endl;//引用后两个值的大小

    return 0;
}

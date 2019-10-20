#include <iostream>

using namespace std;
int tripleByValue(int n);
void tripleByReference(int &n);
int main()
{
    cout << "Enter a value for count: " ;
    int count;
    cin>>count;//输入
    cout<<"Value of count before call to tripleByValue() is: "<<count<<endl;
    cout<<"Value returned from tripleByValue() is: "<<tripleByValue(count)<<endl;
    cout<<"Value of count (in main) after tripleCallByValue() is: "<<count<<endl;
    cout<<"\n";
    cout<<"Value of count before call to tripleByValue() is: "<<count<<endl;
    tripleByReference(count);
    cout<<"Value of count (in main) after call to tripleByReference() is: "<<count<<endl;
    return 0;
}
int tripleByValue(int n)//函数将形参增加三倍并返回这一结果
{return n*3;
}
void tripleByReference(int &n)//按引用传递并通过引用参数增加三倍
{n=n*3;
}

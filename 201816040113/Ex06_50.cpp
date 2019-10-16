#include <iostream>

using namespace std;
int TripleByValue(int a);
void TripleByReference(int &);
int main()
{
    int a;
    cout << "Enter a value for count:";
    cin >>a;//输入a的值
    cout<<"Value of count before call to tripleByValue is:"<<a<<endl;
    cout<<"Value returned from tripleByValue() is:"<<TripleByValue(a)<<endl;
    cout<<"Value of count (in main) after tripleCallByValue() is: "<<a<<endl;
    cout<<"Value of count before call to tripleByReference() is: "<<a<<endl;
    TripleByReference(a);
    cout<<"Value of count (in main) after call to tripleByReference() is:"<<a<<endl;
    return 0;
}
int TripleByValue(int a)//该函数按值传递计数副本，将副本复制三倍并返回新值
{
    return a*3;
}

void TripleByReference(int &num)//通过参考参数按引用传递计数，并通过其别名（即，参考参数）将count的原始值增大三倍）
{
    num*=3;
}

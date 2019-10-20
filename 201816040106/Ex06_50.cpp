#include<iostream>
using namespace std;//使用命名空间
int tripeByValue(int n){//按值传递
    return n*3;//返回修改值
}
void tripeByRefence(int &n){//按引用传递
    n*=3;//修改值
}
int main(){
    int count;
    cout<<"Enter a value for count:"<<endl;
    cin>>count;//读值]

    cout<<"Value of count before call to tripleByValue() is:"<<count<<endl;

    /*按值传递*/
    int res=tripeByValue(count);//记录按值传递的结果
    cout<<"Value returned from tripleByValue() is:"<<res<<endl;
    cout<<"Value of count (in main) after tripleCallByValue() is: "<<count<<endl;

    /*按引用传递并修改值*/
    cout<<"Value of count before call to tripleByReference() is:"<<count<<endl;
    tripeByRefence(count);//按引用传递后，输出传递修改后的结果
    cout<<"Value of count (in main) after call to tripleByReference() is:"<<count<<endl;
    return 0;
}

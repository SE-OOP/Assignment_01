#include<iostream>
using namespace std;
int tripeByValue(int n){
    return n*3;
}
void tripeByRefence(int &n){
    n*=3;
}
int main(){
    int count;
    cin>>count;
    int res=tripeByValue(count);
    cout<<res<<endl;
    tripeByRefence(count);
    cout<<count<<endl;
    return 0;
}

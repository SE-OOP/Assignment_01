#include <iostream>  //allows program to output date to the screen

using namespace std;   //programs uses std

int tripByValue(int x) ;

int tripByReference(int &x) ;

//function main begins program execution
int main()
{
    int count;//integer to compare
    cout << "请输入一个整数" << endl;//prompt user for data
    cin>>count;//read a integer from user
    cout << "输出(三倍)" << endl;//prompt user for data
    cout<<"第一种:"<<tripByValue(count)<<endl;//print read a integer
    cout<<"第二种:"<<tripByReference(count)<<endl;//print read a integer
}//end function main

int tripByValue(int x)
{
    return x*3;
}

int tripByReference(int &x)
{
    return x*3;
}

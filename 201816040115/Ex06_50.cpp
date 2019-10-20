//Exercise 6.50 Solution: Ex06_50.cpp
//Comparing call by value and call by reference.
#include <iostream>
#include<cstdlib>
#include<cstdio>

using namespace std;

int tripleByValue(double num); //按值传递变量增加3倍
void tripleByReference(double &num); //按引用传递使变量增加3倍

int main()
{
    double Count;
    cout << "Enter a value for Count: ";
    cin >> Count;

    cout << "Value of count before call to tripleByValue() is: " << Count << endl;
    cout << "Value returned from tripleByValue() is: " << tripleByValue(Count) << endl;
    cout << "Value of count (in main) after tripleCallByValue() is: " << Count << endl;
    cout << endl;

    cout << "Value of count before call to tripleByReference() is: " << Count << endl;
    tripleByReference(Count);
    cout << "Value of count (in main) after call to tripleByReference() is: " << Count << endl;

    return 0;
}

int tripleByValue(double num)//按值传递变量增加3倍
{
    return 3*num;
}

void tripleByReference(double &num)//按引用传递使变量增加3倍
{
    num*=3;
}

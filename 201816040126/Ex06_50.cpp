#include <iostream>

using namespace std;

int tripleByValue( int x )//按值传递
{
    return 3 * x;
}
void tripleByReference( int &x )//按引用传递
{
    x = 3 * x;
}

int main()
{
    int count;

    std::cout << "Enter a value for count: ";
    std::cin >> count;
    std::cout << "\n" << endl;//换行


    std::cout << "Value of count before call to tripleByValue() is: " << count << endl;//按值传递前的数值
    std::cout << "Value returned from tripleByValue() is: " << tripleByValue( count ) << endl;
    std::cout << "Value of count (in main) after tripleCallByValue() is: " << count << endl;//按值传递后的数值
    std::cout << "\n" << endl;//换行

    std::cout << "Value of count before call to tripleByReference() is: " << count << endl;//按引用传递前的数值
    tripleByReference( count );
    std::cout << "Value of count (in main) after tripleByReference() is: " << count << endl;//按引用传递后的数值
}

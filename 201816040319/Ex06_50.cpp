/*(按值传递相对于按引用传递)编写一个完整的C++程序，其中包含下面指定的两个备用函数，每个函数只是Main中定义的变量数的三倍。然后比较和对比这两种方法。这两项职能是：

(A)函数tripleByValue，它通过值传递计数的副本，对副本进行三倍化，并返回新值。
(B)函数tripleByReference，它通过引用参数传递计数，并通过别名(即引用参数)将计数的原始值增加三倍。


样本输出
Enter a value for count: 10


Value returned from tripleByValue() is: 30
Value of count (in main) after tripleCallByValue() is: 10

Value of count before call to tripleByReference() is: 10
Value of count (in main) after call to tripleByReference() is: 30
*/
#include <iostream>
using namespace std;

int  tripByvalue(int );
void tripByReference(int &);

int main(void)
{
    int number;

    cout <<"Enter a value for count:"<<endl;
    cin>>number;//输入元素

    cout<<"Value of count before call to tripleByValue() is: "<<tripByvalue(number)<<endl;//调用函数
    cout<<"Value of count (in main) after tripleCallByValue() is:"<<number<<endl;

    cout<<"Value of count before call to tripleByReference() is: "<<number<<endl;
    tripByReference(number);
    cout<<"Value of count (in main) after call to tripleByReference() is:"<<number<<endl;


}

int tripByvalue(int number)
{
    return 3*number;
}

void tripByReference(int &numberRef)
{
    numberRef= 3 *numberRef;
}

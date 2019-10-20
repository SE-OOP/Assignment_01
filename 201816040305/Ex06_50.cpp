#include <iostream>
void TripleByValue(int n) ;
void TripleByReference(int & n) ;
using namespace std;

int main()
{
    int  n  ;
    //cout<<"Author:  201816040305  李昊原"<<endl ;
    cout<<"Enter a value for count:" ;
    cin>>n ;
    cout<<"Value of count before call to tripleByValue() is:"<< n <<endl;
    TripleByValue( n) ;                                                                         //使用值传递函数
    cout<<"Value of count (in main) after tripleCallByValue() is:"<< n <<endl<<endl;
    cout<<"Value of count before call to tripleByReference() is:"<< n <<endl;
    TripleByReference(n) ;                                                                      //使用引用传递参数
    cout<<"Value of count (in main) after call to tripleByReference() is:"<<n<<endl;

}
void TripleByValue(int n){                                                                      // 值传递
    n *= 3 ;                                                                                    //将n扩大三倍
    cout<<"Value returned from tripleByValue() is:"<< n <<endl;
}

void TripleByReference(int & n){                                                                //引用传递
    n *= 3 ;                                                                                    //将n扩大三倍
}

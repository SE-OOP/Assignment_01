#include <iostream>

using namespace std;

int tripleByVolue (int  );
void tripleByReference(int & );
int main()
{
    int count ;

    cout << "请输入count的数值"<<endl;

    cin >> count ;

    cout << "count = " << count << " Before tripleByVoule\n" ;
    cout <<"Voule return by tripleByVoule: " << tripleByVolue( count ) << endl;
    cout << "count = " << count << " After tripleByVoule\n\n" ;

    cout << "count = " <<count << " Before tripleByReference\n" ;
    tripleByReference( count );
    cout << "count = " << count << " After tripleByReference\n" <<endl;
    return 0;
}
int tripleByVolue (int x )
{
    return x*3;
}

void tripleByReference(int &x )
{
    x *= 3;
}

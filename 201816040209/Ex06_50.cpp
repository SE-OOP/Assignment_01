#include <iostream>
using namespace std;

//function cubic for int values
int tripeByvalue(int count_cy){
    count_cy *=3;
    return count_cy;
}//end function cubic with int argument

//function cubic for int values
void tripeByReference(int &count_cy){
    count_cy *=3;
}//end function cubic with void argument

int main(){
    int count;
    int &count_py = count;
    cout<<"Enter a value for count: ";
    cin>>count;
    cout<<"\nValue of count before call to tripleByValue() is: "<<count<<endl;
    cout<<"Value returned from tripleByValue() is: "<<tripeByvalue(count);
    cout<<"\nValue of count (in main) after tripleCallByValue() is: "<<count<<endl<<endl;
    cout<<"Value of count before call to tripleByReference() is: "<<count<<endl;
    tripeByReference(count_py);
    cout<<"Value of count (in main) after call to tripleByReference() is: "<<count;
}


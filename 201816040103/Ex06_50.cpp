#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int tripByValue(int a )
{
	return a*3;
 } 
void tripleByReference(int &a)
{
	a=a*3;
}
int main(int argc, char** argv) {
	int count,b;
	cin>>count;
	b=tripByValue(count);
	 cout<<b;
	 cout<<endl;
	 tripleByReference(count);
	 cout<<count;
	 cout<<endl;
	return 0;
}

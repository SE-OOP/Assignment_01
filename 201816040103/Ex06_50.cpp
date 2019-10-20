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
	int count,w;
	cin>>count;
	w=tripByValue(count);
	 cout<<w<<endl;
	 tripleByReference(count);
	 cout<<count<<endl;
	return 0;
}

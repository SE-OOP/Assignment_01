#include <iostream>
using namespace std;//使用标准命名空间 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int tripleByValue (int y);
void tripleByReference (int &z);

int main(int argc, char** argv) { 
	int count , x;
	cin >> count;
	x=tripleByValue(count);
	cout << x;
	cout << endl;
	tripleByReference(count);
	cout << count;
	cout << endl;
	return 0;
}

int tripleByValue (int y) {//按值传递函数 
    return
	3*y;
}

void tripleByReference (int &z){//按递归传递函数 
     z=3*z;
}

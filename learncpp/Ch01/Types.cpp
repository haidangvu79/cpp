#include <iostream>

using namespace std;

int a, b = 5; // Global variables

int main(){
	bool my_flag;
	a = 7;
	my_flag = false;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "a+b = " << a+b << endl;
	cout << "b-a = " << b-a << endl;
	cout << "flag = " << my_flag << endl;

	unsigned int positive;
	positive = b-a;
	cout << "positive = " << positive << endl;

	return 0;
} 



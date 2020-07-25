#include<iostream>

using namespace std;

void pause() {
	cout << endl;
	cout << "Press any key to continue...";
	cin.get();
}


int main() {
	char a[] = "Hello World";
	cout << "The value of a is " << a << endl;
	cout << "The address of a is " << &a << endl;
	cout << "The address of the a[1] is " << (void*)&a[1] << endl;

	cout << "The size of a is " << (sizeof(a) / sizeof(*a)) << endl;
	
	for (int i = 0; i < ((sizeof(a) / sizeof(*a))-1); i++) {
		cout << "The Value of a[" << i << "] " << a[i] << endl;
	}

	pause();
	return 0;
	
}
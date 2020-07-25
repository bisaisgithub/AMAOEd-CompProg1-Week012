#include<cstdlib>
#include<iostream>

using namespace std;

int main() {
	int myID = 19;
	int *ptrID = &myID;

	cout << "The value of myID is: " << myID << endl;
	cout << "The value of *ptrID is: " << ptrID << endl;
	cout << "The value pointed by ptrID is: " << *ptrID << endl;

	cout << endl;
	system("pause");
	return EXIT_SUCCESS;

}
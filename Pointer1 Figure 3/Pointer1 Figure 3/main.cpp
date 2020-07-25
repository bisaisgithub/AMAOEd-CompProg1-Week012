#include<cstdlib>
#include<iostream>

using namespace std;

int main() {
	int myId = 193612;
	int yourId = 856091;
	int& refId = myId;

	cout << "Value of myId is " << myId << endl;
	cout << "Value of yourId is " << yourId << endl;
	cout << "Value of refId is " << refId << endl;

	refId = yourId;
	yourId = 756231;

	cout << "Value of myId is" << myId << endl;
	cout << "Value of yourId is " << yourId << endl;
	cout << "Value of refId is " << refId << endl;

	cout << endl;
	system("pause");
	return EXIT_SUCCESS;

}
#include <iostream>
using namespace std;

int add(int a, int b) {
	return a + b;
}

int subtract(int a, int b) {
	return a - b;
}

int main() { 
	
	int choose, numA, numB;
	
	cout << "1. add" << endl;
	cout << "2. subtract" << endl;
	cout << "Choose: ";
	cin >> choose;

	switch (choose) {
		case 1:
			cout << "Number A: ";
			cin >> numA;
			cout << "Number B: ";
			cin >> numB;
			
			cout << add(numA, numB);
			break;
		case 2:
			cout << "Number A: ";
			cin >> numA;
			cout << "Number B: ";
			cin >> numB;
			
			cout << subtract(numA, numB);
			break;
		default:
			cout << "Wrong option.";
			break;
			
	}
}

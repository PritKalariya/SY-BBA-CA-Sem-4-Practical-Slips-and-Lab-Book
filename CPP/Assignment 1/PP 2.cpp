// Write a C++ program to check whether a given number is even or odd.

#include<iostream>
using namespace std;

int main() {
	int num;

	cout << "Enter the number: ";
	cin >> num;

	if(num % 2 == 0) {
		cout << "Even number.";
	} else {
		cout << "Odd number.";
	}

	return 0;
}

// Write a C++ program to find largest and smallest number of 3 integer numbers. (Use cascading of I/O operators.)

#include<iostream>
using namespace std;

int main() {
	int a, b, c;

	cout << "Enter first number: ";
	cin >> a;

	cout << "Enter second number: ";
	cin >> b;

	cout << "Enter third number: ";
	cin >> c;

	if(a > b && a > c) {
		cout << a << " is maximum.";
	} else if(b > a && b > c) {
		cout << b << " is maximum.";
	} else {
		cout << c << " is maximum.";
	}

	cout << "\n";

	if(a < b && a < c) {
		cout << a << " is minimum.";
	} else if(b < a && b < c) {
		cout << b << " is minimum.";
	} else {
		cout << c << " is minimum.";
	}

	return 0;
}
// Write a C++ program to find factorial of a given number.

#include<iostream>
using namespace std;

int main() {
	int fact = 1, i, num;

	cout << ("Enter the number: ");
	cin >> num;

	for(i = num; i >= 1; i--) {
		fact = fact * i;
	}

	cout << ("The factorial of the number is: ") << fact;

	return 0;
}
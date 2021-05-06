// Write a C++ program to check whether a given number is prime or not.

#include<iostream>
using namespace std;

int main() {
	int num, i, m = 0, flag = 0;

	cout << "Enter the number: ";
	cin >> num;

	m = num / 2;

	for(i = 2; i <= m; i++) {
		if(num % i == 0) {
			cout << "Not a prime number." << endl;
			flag = 1;
			break;
		}
	}

	if(flag == 0) {
		cout << "Number is prime." << endl;
	}

	return 0;
}
// Write a C++ program to check whether a given number is perfect or not.

#include<iostream>
using namespace std;

int main() {
	int num, i = 1, sum = 0;

	cout << "Enter the number: ";
	cin >> num;

	while(i < num) {
		if(num % i == 0) {
			sum = sum + i;
		}
		i++;
	}

	if(sum == num) {
		cout << num << " is a perfect number.\n";
	}
	else {
		cout << num << " is not a perfect number.\n";
	}

	return 0;
}
// Write a C++ program to convert decimal number into binary number.

#include<iostream>
using namespace std;

int main() {
    int n, b = 1, sum, temp = 1;
    long a = 0;

    cout << "Enter a decimal number: ";
    cin >> n;

    while(n > 0) {
        sum = n % 2;
        n = n / 2;
        a += sum*temp;
        temp = temp*10;
    }

    cout << "The number is: " << a;

    return 0;
}
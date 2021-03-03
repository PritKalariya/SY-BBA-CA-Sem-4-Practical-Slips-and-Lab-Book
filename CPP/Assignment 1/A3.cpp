// Write a C++ program to reverse a number.

#include<iostream>
using namespace std;

int main() {
    int num, rem = 0, rev = 0;

    cout << "Enter number: ";
    cin >> num;

    while(num != 0) {
        rem = num % 10;
        rev = rev*10 + rem;
        num = num / 10;
    }

    cout << "Reverse number is: " << rev;

    return 0;
}
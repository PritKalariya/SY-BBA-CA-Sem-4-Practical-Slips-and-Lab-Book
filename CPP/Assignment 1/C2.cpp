/*
Write a C++ program to calculate following series:
1/1! + 2/2! + 3/3! + …. + n/n
*/

#include<iostream>
using namespace std;

int main() {
    int n, fact = 1, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    for(int i = 1; i <=n; i++) {
        fact *= i;
        sum += i/fact;
    }

    cout << "Sum is: " << sum;

    return 0;
}
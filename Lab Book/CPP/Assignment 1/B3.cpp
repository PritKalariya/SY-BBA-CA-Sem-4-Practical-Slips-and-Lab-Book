/*
Write a C++ program to calculate following series:
(1*1)+(2*2)+(3*3)+ … + (n*n)
*/

#include<iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter a anumber: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        sum += i*i;
    }

    cout << sum;

    return 0;
}
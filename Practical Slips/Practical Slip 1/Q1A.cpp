/*
Write a c++ program to check maximum and minimum of two interger numbers. (Use Inline Function and Conditional Operator).
*/

#include<iostream>
using namespace std;


inline int max(int a, int b) {
   return ((a > b) ? a : b);
}

inline int min(int a, int b) {
    return ((a < b) ? a : b);
}

int main() {
    int a, b;

    cout << "Enter 2 numbers" << endl;
    cout << "Number 1: ";
    cin >> a;
    cout << "Number 2: ";
    cin >> b;

    cout << "The maximum number is: " << max(a, b) << endl;
    cout << "The minimum number is: " << min(a, b) << endl;

    return 0;
}
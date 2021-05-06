// Write a c++ program to interchange values of two inter numbers. (Use call by reference).

#include<iostream>
using namespace std;

void swap(int &a, int&b) {
    int temp;

    temp = a;
    a = b;
    b = temp;
}


int main() {
    int a,b;

    cout << "Enter two numbers" << endl;

    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    cout << endl << "Original Numbers" << endl << "a = " << a << " & b = " << b << endl;

    swap(a, b);

    cout << endl << "After swap Numbers" << endl << "a = " << a << " & b = " << b << endl;

    return 0;
}
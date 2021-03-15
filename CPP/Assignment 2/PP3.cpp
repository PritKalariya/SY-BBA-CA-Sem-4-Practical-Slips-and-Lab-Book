/*
Write a C++ program to perform increment and decrement operation on integer number. (Use inline function)
*/

#include <iostream>
using namespace std;

inline int incr(int a) {
    return a + 1;
}

inline int decr(int a) {
    return a - 1;
}

int main() {
    int num;

    cout << "Enter number: ";
    cin >> num;

    cout << "Increment: " << incr(num) << endl;
    cout << "Decrement: " << decr(num) << endl;

    return 0;
}
/*
Write a C++ program to read two float numbers. Perform arithmetic operations like +, - , *, / on these numbers using Inline Function. (Use manipulators)
*/

#include <iostream>
using namespace std;

inline float add(float a, float b) {
    return a + b;
}

inline float subs(float a, float b) {
    return a - b;
}

inline float mul(float a, float b) {
    return a * b;
}

inline float div(float a, float b) {
    return a / b;
}

int main() {
    float f1, f2;

    cout << "Enter num1: ";
    cin >> f1;
    cout << "Enter num2: ";
    cin >> f2;

    cout << "Addition: " << add(f1, f2) << endl;
    cout << "Substraction: " << subs(f1, f2) << endl;
    cout << "Multiplication: " << mul(f1, f2) << endl;
    cout << "Division: " << div(f1, f2) << endl;

    return 0;
}
/* Write a C++ program to accept two integers and an arithmetic operator(+, -, *, /) from user and performs the corresponding arithmetic operation and display the result. (Use switch statement) */

#include<iostream>
using namespace std;

int main() {
    int num1, num2, ch;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    cout << "1. Addition" << endl;
    cout << "2. Substaction" << endl;
    cout << "3. multiplication" << endl;
    cout << "4. division" << endl;
    cout << "Enter your choice: ";
    cin >> ch;

    switch(ch) {
        case 1: cout << "The sum of two numbers is: " << num1 + num2;
                break;

        case 2: cout << "The substraction of two numbers is: " << num1 - num2;
                break;

        case 3: cout << "The multiplication of two numbers is: " << num1 * num2;
                break;

        case 4: cout << "The division of two numbers is: " << num1 / num2;
                break;

        default: cout << "Invalid Input!!";
    }

    return 0;
}
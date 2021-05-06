/*
Write a C++ program to calculate maximum and minimum of two integer numbers of two different classes.(Use friend function)
*/

#include<iostream>
using namespace std;

class Second_number;

class First_number {
    int num1;

    public:
        void get_number() {
            cout << "Enter number: ";
            cin >> num1;
        }

    friend void max_min(First_number, Second_number);
};

class Second_number {
    int num2;

    public:
        void get_number() {
            cout << "Enter number: ";
            cin >> num2;
        }

    friend void max_min(First_number, Second_number);
};

void max_min(First_number a, Second_number b) {
    if(a.num1 > b.num2) {
        cout << "First number is greater." << endl;
    } else {
        cout << "second number is greater." << endl;
    }

    if(a.num1 < b.num2) {
        cout << "First number is smaller." << endl;
    } else {
        cout << "Second number is smaller." << endl;
    }
}

int main() {
    First_number a;
    Second_number b;

    a.get_number();
    b.get_number();

    max_min(a, b);

    return 0;
}
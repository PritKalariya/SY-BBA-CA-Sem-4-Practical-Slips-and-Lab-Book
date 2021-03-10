/*
Write a C++ program to add two float numbers of two different classes using friend function
*/

#include<iostream>
using namespace std;

// Forward declaration of class
class Two;

class One {
    float n1;

    public:
        void accpet() {
            cout << "Enter number: ";
            cin >> n1;
        }

        friend void add(One, Two);
};

class Two {
    float n2;

    public:
        void accpet() {
            cout << "Enter number: ";
            cin >> n2;
        }

        friend void add(One, Two);
};

void add(One a, Two b) {
    float sum;
    sum = a.n1 + b.n2;
    cout << "The sum is: " << sum;
}

int main() {

    One a;
    Two b;

    a.accpet();
    b.accpet();

    add(a, b);

    return 0;
}
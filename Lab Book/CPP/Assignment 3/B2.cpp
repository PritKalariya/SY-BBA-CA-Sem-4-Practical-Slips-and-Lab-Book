/*
Write a C++ program to create a class Distance with data members feet and inches. Write member functions for the following:
a. To accept distance
b. To display distance
c. To add two distance objects
(Use object as a function argument and function returning object)
*/

#include<iostream>
using namespace std;


class Distance {
    int feet, inches, sum = 0;

    public:
        void accept() {
            cout << "Enter distance in feet: ";
            cin >> feet;
            cout << "Enter distance in inches: ";
            cin >> inches;
            cout << endl;
        }

        void add(Distance a) {
           
        }


        void display() {
            cout << "The total is " << sum << endl;
        }
};
// Write a C++ program to display Armstrong numbers between two intervals.

#include<iostream>
using namespace std;

int main() {
    int num, rem = 0, sum = 0, temp = 0;

    cout << "Enter number: ";
    cin >> num;

    temp = num;

    while(temp != 0) {
        rem = temp % 10;
        sum += rem*rem*rem;
        temp = temp / 10;
    }

    if(sum == num) {
        cout << "It is an armstrong number.";
    } else {
        cout << "It is not an armstrong number.";
    }

    return 0;
}
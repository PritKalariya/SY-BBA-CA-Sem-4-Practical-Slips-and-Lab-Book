/*
Write a C++ program to print the following pattern.
A
B C
D E F
G H I J
*/

#include<iostream>
using namespace std;

int main() {
    int  k =1;

    for(int i = 1; i <= 4; i++) {

        for(int j = 1; j <= i; j++, k++) {
            cout << (char)(k + 64);
        }

        cout << endl;
    }

    return 0;
}
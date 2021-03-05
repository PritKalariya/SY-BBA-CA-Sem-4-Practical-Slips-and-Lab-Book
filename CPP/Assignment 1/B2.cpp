/*
Write a C++ program to print the following pattern (reverse stars)
*/

#include<iostream>
using namespace std;

int main() {
    int m = 1;

    for(int i = 5; i >= 1; i--) {

        for(int j = 1; j <= i; j++) {
            cout << " ";
        }

        for(int k = 1; k <= m; k++) {
            cout << "*";
        }

        cout << endl;
        m++;
    }

    return 0;
}
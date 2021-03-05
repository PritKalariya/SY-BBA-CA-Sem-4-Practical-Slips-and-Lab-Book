// Write a C++ program to print the following pattern. (star pyramid)

#include<iostream>
using namespace std;

int main() {
    int space, n = 5;

    for(int i = 1, k = 0; i <= n; ++i, k = 0)
    {
        for(space = 1; space <= n-i; ++space)
        {
            cout <<"  ";
        }

        while(k != 2*i-1)
        {
            cout << "* ";
            ++k;
        }
        cout << endl;
    }

    return 0;
}
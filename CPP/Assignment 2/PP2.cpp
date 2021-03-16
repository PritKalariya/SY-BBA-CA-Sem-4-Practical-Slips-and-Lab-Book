/*
Write a C++ program to store percentage of ‘n’ students and display it where ‘n’ is the number of students entered by the user.(Use new and delete operator)
*/

#include<iostream>
using namespace std;

int main() {
    float *arr;
    int n, per;

    cout << "Enter the size of the array: ";
    cin >> n;

    arr = new float[n];

    cout << "Enter the percentages: ";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    cout << endl;
    cout << "The percentages are: " << endl;
    for(int i=0; i<n; i++) {
        cout <<  arr[i] << endl;
    }

    delete arr;

    return 0;
}
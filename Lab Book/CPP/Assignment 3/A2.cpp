/*
 Write a C++ program to calculate the average height of all the students of a class. The number of students and their heights are entered by user. (Use array of objects)
*/

# include <iostream>
using namespace std;

class Student {
    public:
        int roll_no, height;

        void get_height() {
            cout << "Enter roll number: ";
            cin >> roll_no;
            cout << "Enter height: ";
            cin >> height;
            cout << endl;
        }
};

int main() {
    Student s[10];
    int n, total = 0, avgerage = 0;

    cout << "Enter the number of students: ";
    cin >> n;

    for(int i=0; i<n; i++) {
        s[i].get_height();
        total =+ s[i].height;
    }

    avgerage = total / n;

    cout << "The average is: " << avgerage;

    return 0;
}
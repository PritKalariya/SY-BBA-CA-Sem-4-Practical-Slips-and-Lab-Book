/*
Consider the following C++ class
class Point {
    int x, y;

    public:
        void setpoint(int, int); //To set the values of x and y co-ordinate.
        void showpoint(); //To display co-ordinate of a point P in format (x, y)
}
*/

#include<iostream>
using namespace std;

class Point {
    int x, y;

    public:
        void setpoint(int a, int b) {
            x = a;
            y = b;
        }

        void showpoint() {
            cout << "(" << x << ", " << y << ")";
        }
};


int main() {
    int a, b;
    Point p;

    cout << "Enter coordinates" << endl;
    cout << "Enter x: ";
    cin >> a;
    cout << "Enter y: ";
    cin >> b;

    p.setpoint(a, b);
    p.showpoint();

    return 0;
}
/*
Write a C++ program to create two Classes Square and Rectangle. Compare area of both the shapes using friend function. Accept appropriate data members for both the classes.
*/

#include<iostream>
using namespace std;

class Square {
    public:
        int s;

        void getdata() {
            cout << "Enter the side of the square: ";
            cin >> s;
        }

        int calArea() {
            return (s*s);
        }

        friend void compare(int s, int r);
};

class Rectangle {
    public:
        int l, w;

        void getdata() {
            cout << "Enter the length of the rectangle: ";
            cin >> l;
            cout << "Enter the width of the rectangle: ";
            cin >> w;
        }

        int calArea() {
            return (l*w);
        }

        friend void compare(int s, int r);
};

void compare(int s, int r) {
    if(s > r) {
        cout << "The area of square is bigger than area of rectangle." << endl;
    } else {
        cout << "The area of rectangle is bigger than area of square." << endl;
    }
}


int main() {
    int s_area, r_area;
    Square s1;
    Rectangle r1;

    s1.getdata();
    s_area = s1.calArea();

    r1.getdata();
    r_area = r1.calArea();

    cout << "Square: " << s_area << endl;
    cout << "Rectangle: " << r_area << endl;

    compare(s_area, r_area);

    return 0;
}
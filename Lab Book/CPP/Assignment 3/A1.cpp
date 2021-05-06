/*
Write a C++ program to create a class Student with data members Roll_No, Student_Name, Class. Write member functions to accept and display Student information also display count of students. (Use Static data member and Static member function)
*/

#include<iostream>
using namespace std;

class Student {
    static int count;
    int roll_no;
    char std_name[10], std_class[20];

    public:
        void add_student() {
            cout << "Enter student roll no: ";
            cin >> roll_no;
            cout << "Enter student name: ";
            cin >> std_name;
            cout << "Enter student class: ";
            cin >> std_class;
            cout << endl;
            count++;
        }

        void display_student() {
            cout << "Student roll no: " << roll_no << endl;
            cout << "Student name: " << std_name << endl;
            cout << "Student class: " << std_class << endl;
            cout << endl;
        }

        static void display_count() {
            cout << "Student count is: " << count;
        }
};

int Student :: count;

int main() {
    Student s1[10];
    int n;

    cout << "Enter the number of students: ";
    cin >> n;

    for(int i=0; i<n; i++) {
        s1[i].add_student();
    }

    cout << endl;

    cout << "Student details are: " << endl;
    for(int i=0; i<n; i++) {
        s1[i].display_student();
    }

    Student :: display_count();

    return 0;
}
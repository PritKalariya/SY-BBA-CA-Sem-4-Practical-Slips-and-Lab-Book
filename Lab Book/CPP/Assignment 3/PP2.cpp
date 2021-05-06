/*
Write a C++ program to create a class Employee with data members Emp_id, Name, department, date_of_joining and Salary. Write member functions to accept and display details of ‘n’ employees. (Use array of objects)
*/

#include<iostream>
using namespace std;

class Employee {
    int emp_id;
    char name[10], department[20], date_of_joining[10];
    long int salary;

    public:
        void accept() {
            cout << "Enter Employee Id: ";
            cin >> emp_id;
            cout <<"Enter name: ";
            cin >> name;
            cout <<"Enter department: ";
            cin >> department;
            cout <<"Enter date of joining: ";
            cin >> date_of_joining;
            cout << "Enter salary: ";
            cin >> salary;
        }

        void display() {
            cout << "Emp ID: " << emp_id << endl;
            cout << "Name: " << name << endl;
            cout << "Department: " << department << endl;
            cout << "Date of joining: " << date_of_joining << endl;
            cout << "Salary: " << salary << endl;
        }
};

int main() {
    int num;
    Employee emp[10];

    cout << "Enter the number of details: ";
    cin >> num;

    for(int i = 0; i<num; i++) {
        cout << endl << "Enter employee information for employee " << i+1 << endl;
        emp[i].accept();
    }

    for(int i = 0; i<num; i++) {
        cout << endl << "Employee information for employee " << i+1 << endl;
        emp[i].display();
    }

    return 0;
}
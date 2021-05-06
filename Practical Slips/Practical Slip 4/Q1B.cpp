/*
Write a c++ program to create a base class Employee(Emp-Code, Name, Salary). Derive two classes as Fulltime (daily_wages, number_of_days) and Parttime (number_of_working_hours, hourly_wages).
Write a menu driven program to perform following funcitons:
    1. Accept the details of 'n' employees and calculate the salary.
    2. Display the details of 'n' employees.
    3. Display the details of employee having maximum salary for both types of employees.
*/

#include<iostream>
using namespace std;

class Employee {
    public:
        int emp_code;
        char emp_name[50];

        void getdata() {
            cout << "Enter employee code: ";
            cin >> emp_code;
            cout << "Enter employee name: ";
            cin >> emp_name;
            cout << emp_code << "\t" << emp_name << endl;
        }
};


class Fulltime: public Employee {
    public:
        int daily_wages, number_of_days;

        void getdata() {
            cout << "Enter daily wages: ";
            cin >> daily_wages;
            cout << "Enter number of days: ";
            cin >> number_of_days;
        }

        void displaydata() {
            cout << "Employee datials" << endl;
            cout << "Employee code: " << emp_code << endl;
            cout << "Employee name: " << emp_name << endl;
            cout << "Full time salary: " << calSal();
        }

        int calSal() {
            return (daily_wages*number_of_days);
        }
};

class Parttime: public Employee {
    public:
        int number_of_working_hours, hourly_wages;
};

int main() {
    int n, ch;
    Employee emp[10];
    Fulltime fulltime_emp[10];
    Parttime parttime_emp[10];

    cout << "Enter the number of employees: ";
    cin >> n;

    cout << "\n1. Display salary of all the employees.";
    cout << "\n2. Display deatails os all the employees.";
    cout << "\n3. Display employee having max salary.";
    cout << "\n4. Exit";
    cout << "Enter you  choice: ";
    cin >> ch;

    switch(ch) {
        case 1: break;

        case 2: break;

        case 3: break;

        case 4: exit;

        default: cout << "Invalid Input!";
    }

    return 0;
}
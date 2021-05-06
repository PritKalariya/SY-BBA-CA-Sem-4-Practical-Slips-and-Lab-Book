/*
Write a c++ program to accpet worker information Worker_Name, No_Of_Hours_Worked, Pay_Rate and Salary. Write necessary functions to calculate and display the salary of Worker. (Use Default values for Pay_Rate)
*/

#include<iostream>
using namespace std;

class WorkerInformation {
    char Worker_Name[50];
    int No_Of_Hours_Worked, Pay_Rate, Salary;

    public:
        void acccept() {
            cout << "Enter name of the worker: ";
            cin >> Worker_Name;

            cout << "Enter number of hours worked: ";
            cin >> No_Of_Hours_Worked;

            cout << "Enter pay rate: ";
            cin >> Pay_Rate;
        }

        void display() {
            cout << endl << "Worker details" << endl;
            cout << "Name: " << Worker_Name << endl;
            cout << "Salary: " << calSal(No_Of_Hours_Worked, Pay_Rate) << endl;
        }

        int calSal(int work_hrs, int pay_rate) {
            return (work_hrs*pay_rate);
        }
};


int main() {
    WorkerInformation w;

    w.acccept();
    w.display();
    return 0;
}
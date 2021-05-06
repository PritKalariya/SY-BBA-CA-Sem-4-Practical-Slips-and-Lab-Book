/*
Write a C++ program to create a class Customer with data members ID, Name, Addr and Contact_No. Write member functions to accept and display customer information. (Use scope resolution operator while defining member functions)
*/

#include<iostream>
using namespace std;

class Customer {
    int id;
    char name[10], add[20];
    long int contact_no;

    public:
        void accept();
        void display();
};

void Customer::accept() {
    cout << "Enter cutomer information: " << endl;
    cout << "Enter Id: ";
    cin >> id;
    cout <<"Enter name: ";
    cin >> name;
    cout <<"Enter address: ";
    cin >> add;
    cout <<"Enter contact info: ";
    cin >> contact_no;
}

void Customer::display() {
    cout << endl;
    cout << "Cutomer information: " << endl;
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Address: " << add << endl;
    cout << "Contact: " << contact_no << endl;
}


int main() {
    Customer c1;

    c1.accept();
    c1.display();

    return 0;
}
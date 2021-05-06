/*
Write a C++ program using class to accept and display ‘n’ Products information, also display information of a product having maximum price. (Use array of objects and dynamic memory allocation)
*/

#include<iostream>
using namespace std;

class Product {
    public:
        int id, price;
        char name[10];

        void accept() {
            cout << "Enter product id: ";
            cin >> id;
            cout << "Enter product name: ";
            cin >> name;
            cout << "Enter price: ";
            cin >> price;
            cout << endl;
        }

        void display() {
            cout << "Product id: " << id << endl;
            cout << "Product name: " << name << endl;
            cout << "Product price: " << price << endl;
        }

        void max(Product p1) {
            int max = 0, count;

            
        }
};

int main() {
    Product *p1;
    int n, max = 0, count;

    cout << "Enter the number of products: ";
    cin >> n;

    p1 = new Product[n];

    for(int i=0; i<n; i++) {
        p1[i].accept();

        if(p1[i].price > max) {
            max = p1[i].price;
            count = i;
        }
    }

    return 0;
}
#include <iostream>
using namespace std;

class Product
{
public:
    int id;
    string name;
    int price;
    int sales[12];

    void accept()
    {
        cout << "Enter Product ID: ";
        cin >> id;

        cout << "Enter Product Name: ";
        cin >> name;

        cout << "Enter Product Price: ";
        cin >> price;

        cout << "Enter Sales of 12 Months:\n";
        for (int i = 0; i < 12; i++)
        {
            cin >> sales[i];
        }
    }

    void display()
    {
        int total = 0;

        for (int i = 0; i < 12; i++)
        {
            total = total + sales[i];
        }

        cout << "\nProduct ID : " << id << endl;
        cout << "Product Name : " << name << endl;
        cout << "Price : " << price << endl;
        cout << "Total Quantity Sold : " << total << endl;
        cout << "Total Bill : " << total * price << endl;
    }
};

int main()
{
    Product p[2];

    for (int i = 0; i < 2; i++)
    {
        cout << "\nEnter Details of Product " << i + 1 << endl;
        p[i].accept();
    }

    cout << "\nProduct Details\n";

    for (int i = 0; i < 2; i++)
    {
        p[i].display();
    }

    return 0;
}
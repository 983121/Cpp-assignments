#include <iostream>
using namespace std;

class Employee
{
private:
    int empId;
    string name;
    float salary, bonus, total;

public:
    // Default Constructor
    Employee()
    {
        empId = 0;
        name = "Not Given";
        salary = 0;
        bonus = 0;
        total = 0;
    }

    // Parameterized Constructor
    Employee(int id, string n, float s, float b)
    {
        empId = id;
        name = n;
        salary = s;
        bonus = b;
        total = salary + bonus;
    }

    void display()
    {
        cout << "\nEmployee ID : " << empId << endl;
        cout << "Employee Name : " << name << endl;
        cout << "Basic Salary : " << salary << endl;
        cout << "Bonus : " << bonus << endl;
        cout << "Total Salary : " << total << endl;
    }
};

int main()
{
    Employee e1;

    cout << "Default Constructor Output";
    e1.display();

    int id;
    string name;
    float salary, bonus;

    cout << "\nEnter Employee ID: ";
    cin >> id;

    cout << "Enter Employee Name: ";
    cin >> name;

    cout << "Enter Basic Salary: ";
    cin >> salary;

    cout << "Enter Bonus: ";
    cin >> bonus;

    Employee e2(id, name, salary, bonus);

    cout << "\nParameterized Constructor Output";
    e2.display();

    return 0;
}
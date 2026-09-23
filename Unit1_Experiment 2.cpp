#include <iostream>
using namespace std;

class Rectangle
{
private:
    float length, breadth;

public:
    void getData()
    {
        cout << "Enter Length: ";
        cin >> length;

        cout << "Enter Breadth: ";
        cin >> breadth;
    }

    void area()
    {
        cout << "Area of Rectangle = " << length * breadth << endl;
    }

    void perimeter();
};

void Rectangle::perimeter()
{
    cout << "Perimeter of Rectangle = " << 2 * (length + breadth) << endl;
}

int main()
{
    Rectangle r;

    r.getData();
    r.area();
    r.perimeter();

    return 0;
}
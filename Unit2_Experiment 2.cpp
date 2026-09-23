#include <iostream>
using namespace std;

class Book
{
private:
    int bookId;
    string title;
    string author;
    float price;
    static int count;

public:
    // Parameterized Constructor
    Book(int id, string t, string a, float p)
    {
        bookId = id;
        title = t;
        author = a;
        price = p;
        count++;
    }

    // Copy Constructor
    Book(Book &b)
    {
        bookId = b.bookId;
        title = b.title;
        author = b.author;
        price = b.price;
        count++;
    }

    // Destructor
    ~Book()
    {
        count--;
    }

    void display()
    {
        cout << "\nBook ID : " << bookId << endl;
        cout << "Title : " << title << endl;
        cout << "Author : " << author << endl;
        cout << "Price : " << price << endl;
    }

    static void showCount()
    {
        cout << "Total Books : " << count << endl;
    }
};

int Book::count = 0;

int main()
{
    Book b1(101, "C++", "Bjarne", 450);

    cout << "First Book";
    b1.display();

    Book b2(b1);

    cout << "\nCopied Book";
    b2.display();

    cout << endl;
    Book::showCount();

    return 0;
}
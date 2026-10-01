#include <iostream>
#include <string>
using namespace std;

// ==========================================
// 1. DEMONSTRATION OF STATIC MEMBERS
// ==========================================
class StaticExample {
private:
    static int count;
    int id;

public:
    StaticExample() {
        count++;
        id = count;
    }

    static void showCount() {
        cout << "Total objects created: " << count << endl;
    }

    void display() const {
        cout << "Object ID: " << id << endl;
    }
};

// Initializing the static data member outside the class
int StaticExample::count = 0;


// ==========================================
// 2. DEMONSTRATION OF FRIEND FUNCTION
// ==========================================
class ClassA;
class ClassB;

class ClassA {
private:
    int valueA;
public:
    ClassA(int v) : valueA(v) {}
    
    // Declaring the friend function inside ClassA
    friend void compareValues(ClassA &, ClassB &);
};

class ClassB {
private:
    int valueB;
public:
    ClassB(int v) : valueB(v) {}
    
    // Declaring the friend function inside ClassB
    friend void compareValues(ClassA &, ClassB &);
};

// Definition of the friend function that accesses private data of both classes
void compareValues(ClassA &a, ClassB &b) {
    cout << "Value in ClassA: " << a.valueA << endl;
    cout << "Value in ClassB: " << b.valueB << endl;
    
    if (a.valueA > b.valueB)
        cout << "ClassA value is greater" << endl;
    else if (a.valueA < b.valueB)
        cout << "ClassB value is greater" << endl;
    else
        cout << "Both values are equal" << endl;
}


// ==========================================
// 3. DEMONSTRATION OF FRIEND CLASS
// ==========================================
class SecretData {
private:
    string password;
    int secretNumber;
public:
    SecretData(string p, int n) : password(p), secretNumber(n) {}
    
    // Declaring FriendClassExample as a friend class
    friend class FriendClassExample;
};

class FriendClassExample {
public:
    // Can directly access private members of SecretData
    void displaySecret(SecretData &s) {
        cout << "Password: " << s.password << endl;
        cout << "Secret Number: " << s.secretNumber << endl;
    }
};


// ==========================================
// MAIN FUNCTION
// ==========================================
int main() {
    cout << "\n--- Static Members ---" << endl;
    StaticExample s1, s2, s3;
    StaticExample::showCount();

    cout << "\n--- Friend Function ---" << endl;
    ClassA a(50);
    ClassB b(30);
    compareValues(a, b);

    cout << "\n--- Friend Class ---" << endl;
    SecretData secret("myPassword123", 999);
    FriendClassExample friendObj;
    friendObj.displaySecret(secret);

    return 0;
}

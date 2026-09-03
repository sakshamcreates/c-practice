#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    // Constructor
    Student(string n, int a) {
        name = n;
        age = a;
    }

    // Member function
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    // Creating objects
    Student s1("Saksham", 20);
    Student s2("naman shukla", 21);

    // Calling function
    s1.display();
    cout << endl;
    s2.display();

    return 0;
}
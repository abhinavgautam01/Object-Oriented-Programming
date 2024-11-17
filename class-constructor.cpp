#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;

public:
    // Parameterized Constructor with Default Arguments
    Student(string n = "DefaultStudent", int r = 1) {
        name = n;
        rollNumber = r;
        cout << "Constructor called with name: " << name << ", roll number: " << rollNumber << endl;
    }

    // Copy Constructor
    Student(const Student &obj) {
        name = obj.name;
        rollNumber = obj.rollNumber;
        cout << "Copy constructor called!" << endl;
    }

    // Destructor
    ~Student() {
        cout << "Destructor called for student: " << name << endl;
    }

    // Function to display details
    void display() {
        cout << "Name: " << name << ", Roll Number: " << rollNumber << endl;
    }
};

int main() {
    // Using Constructor with Default Arguments (default case)
    Student s1;
    s1.display();

    // Using Constructor with Specific Arguments
    Student s2("John Doe", 101);
    s2.display();

    // Using Copy Constructor
    Student s3 = s2; // Copying s2
    s3.display();

    // Using Constructor with Default Arguments (partial argument case)
    Student s4("Alice");
    s4.display();

    return 0;
}

#include <iostream>
using namespace std;

// Common base class
class Person {
public:
    void showPerson() {
        cout << "This is a Person." << endl;
    }
};

// First derived class inheriting from Person
class Student : virtual public Person {
public:
    void showStudent() {
        cout << "This is a Student." << endl;
    }
};

// Second derived class inheriting from Person
class Employee : virtual public Person {
public:
    void showEmployee() {
        cout << "This is an Employee." << endl;
    }
};

// Derived class inheriting from both Student and Employee
class WorkingStudent : public Student, public Employee {
public:
    void showWorkingStudent() {
        cout << "This is a Working Student." << endl;
    }
};

int main() {
    WorkingStudent ws;
    
    // Accessing methods from base and intermediate classes
    ws.showPerson();         // Inherited from Person (no ambiguity due to virtual inheritance)
    ws.showStudent();        // Inherited from Student
    ws.showEmployee();       // Inherited from Employee
    ws.showWorkingStudent(); // Specific to WorkingStudent
    
    return 0;
}

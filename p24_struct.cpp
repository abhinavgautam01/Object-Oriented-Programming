#include <iostream>
#include <string>

using namespace std;

// 1. Basic Structure Declaration
struct Point {
    int x;
    int y;

    void display() {
        cout << "Point(" << x << ", " << y << ")" << endl;
    }
};

// 2. Structure Declaration with Member Functions
struct Circle {
    Point center;  // Using Point structure
    float radius;

    float area() {
        return 3.14159 * radius * radius;
    }

    void display() {
        cout << "Circle Center: ";
        center.display();
        cout << "Radius: " << radius << endl;
        cout << "Area: " << area() << endl;
    }
};

// 3. Anonymous Structure
struct {
    int id;
    string name;
} student;

// 4. Nested Structures
struct Rectangle {
    Point topLeft;
    Point bottomRight;

    void display() {
        cout << "Rectangle Top Left: ";
        topLeft.display();
        cout << "Bottom Right: ";
        bottomRight.display();
    }
};

int main() {
    // Using the basic structure
    Point p1;
    p1.x = 10;
    p1.y = 20;
    p1.display();

    // Using the structure with member functions
    Circle c1;
    c1.center.x = 5;  // Setting center
    c1.center.y = 5;  // Setting center
    c1.radius = 10;    // Setting radius
    c1.display();

    // Using the anonymous structure
    student.id = 1;
    student.name = "Alice";
    cout << "Student ID: " << student.id << ", Name: " << student.name << endl;

    // Using nested structures
    Rectangle rect;
    rect.topLeft.x = 0;
    rect.topLeft.y = 10;
    rect.bottomRight.x = 10;
    rect.bottomRight.y = 0;
    rect.display();

    return 0;
}

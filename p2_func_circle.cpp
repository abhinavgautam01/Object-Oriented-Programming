#include <iostream>
#include <cmath> // For M_PI
using namespace std;

// Function to calculate the area of a circle
double calculateArea(double radius) {
    return M_PI * radius * radius; // Area = π * r^2
}

// Function to calculate the perimeter (circumference) of a circle
double calculatePerimeter(double radius) {
    return 2 * M_PI * radius; // Perimeter = 2 * π * r
}

int main() {
    double radius;

    // Input radius from the user
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    // Call functions to calculate area and perimeter
    double area = calculateArea(radius);
    double perimeter = calculatePerimeter(radius);

    // Display the results
    cout << "Area of the circle: " << area << endl;
    cout << "Perimeter (Circumference) of the circle: " << perimeter << endl;

    return 0;
}

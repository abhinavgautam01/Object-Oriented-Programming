#include <iostream>
#include <stdexcept> // For standard exceptions
using namespace std;

// Function to divide two numbers with exception handling
double divide(double numerator, double denominator) {
    if (denominator == 0) {
        throw runtime_error("Division by zero is not allowed!");
    }
    return numerator / denominator;
}

int main() {
    double num, denom;

    cout << "Enter numerator: ";
    cin >> num;

    cout << "Enter denominator: ";
    cin >> denom;

    try {
        // Attempt to divide numbers
        double result = divide(num, denom);
        cout << "Result: " << result << endl;
    } 
    catch (const runtime_error &e) {
        // Handle division by zero error
        cout << "Error: " << e.what() << endl;
    }

    cout << "Program continues after exception handling..." << endl;

    return 0;
}

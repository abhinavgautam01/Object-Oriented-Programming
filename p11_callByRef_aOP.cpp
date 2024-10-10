#include <iostream>
using namespace std;

void performOperations(int& a, int& b, int& sum, int& difference, int& product, double& quotient) {
    sum = a + b;
    difference = a - b;
    product = a * b;
    if (b != 0) {
        quotient = static_cast<double>(a) / b;
    } else {
        cout << "Division by zero is not allowed." << endl;
        quotient = 0; // Default value
    }
}

int main() {
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    int sum, difference, product;
    double quotient;

    performOperations(num1, num2, sum, difference, product, quotient);

    cout << "Addition: " << sum << endl;
    cout << "Subtraction: " << difference << endl;
    cout << "Multiplication: " << product << endl;
    if (num2 != 0) {
        cout << "Division: " << quotient << endl;
    }

    return 0;
}

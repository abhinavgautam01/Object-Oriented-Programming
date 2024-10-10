#include <iostream>
using namespace std;

void add(int a, int b) {
    cout << "Addition: " << a + b << endl;
}

void subtract(int a, int b) {
    cout << "Subtraction: " << a - b << endl;
}

void multiply(int a, int b) {
    cout << "Multiplication: " << a * b << endl;
}

void divide(int a, int b) {
    if (b != 0) {
        cout << "Division: " << static_cast<double>(a) / b << endl;
    } else {
        cout << "Division by zero is not allowed." << endl;
    }
}

int main() {
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    add(num1, num2);
    subtract(num1, num2);
    multiply(num1, num2);
    divide(num1, num2);

    return 0;
}

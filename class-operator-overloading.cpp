#include <iostream>
using namespace std;

// Class to represent a complex number
class Complex {
private:
    double real;    // Real part
    double imag;    // Imaginary part

public:
    // Constructor
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    // Overload the '+' operator
    Complex operator+(const Complex& other) {
        return Complex(real + other.real, imag + other.imag);
    }

    // Overload the '<<' operator for output
    friend ostream& operator<<(ostream& out, const Complex& c) {
        out << c.real << " + " << c.imag << "i";
        return out;
    }
};

int main() {
    // Create two complex numbers
    Complex c1(3.4, 5.6);
    Complex c2(1.2, 3.4);

    // Add the two complex numbers
    Complex c3 = c1 + c2;

    // Display the result
    cout << "c1 = " << c1 << endl;
    cout << "c2 = " << c2 << endl;
    cout << "c1 + c2 = " << c3 << endl;

    return 0;
}

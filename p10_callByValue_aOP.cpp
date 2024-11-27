#include <iostream>
using namespace std;

int add(int, int);
int sub(int, int);
int mul(int, int);
int divi(int, int);
int mod(int, int);

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Sum of " << a << " and " << b << " is " << add(a, b) << endl;
    cout << "Subtraction of " << a << " and " << b << " is " << sub(a, b) << endl;
    cout << "Multiplication of " << a << " and " << b << " is " << mul(a, b) << endl;
    cout << "Division of " << a << " and " << b << " is " << divi(a, b) << endl;
    cout << "Modulus of " << a << " and " << b << " is " << mod(a, b) << endl;

    return 0;
}

int add(int x, int y) {
    return x + y;
}

int sub(int x, int y) {
    return x - y;
}

int mul(int x, int y) {
    return x * y;
}

int divi(int x, int y) {
    if (y != 0)
        return x / y;
    else {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
}

int mod(int x, int y) {
    if (y != 0)
        return x % y;
    else {
        cout << "Error: Modulus by zero!" << endl;
        return 0;
    }
}

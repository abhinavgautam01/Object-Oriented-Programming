#include <iostream>
using namespace std;

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to add two doubles
double add(double a, double b) {
    return a + b;
}

// Function to add three integers
int add(int a, int b, int c) {
    return a + b + c;
}

int main() {
    int intResult = add(3, 4);               // Calls the first add function
    double doubleResult = add(3.5, 4.5);     // Calls the second add function
    int threeIntResult = add(1, 2, 3);       // Calls the third add function

    cout << "Sum of two integers: " << intResult << endl;          // Output: 7
    cout << "Sum of two doubles: " << doubleResult << endl;        // Output: 8
    cout << "Sum of three integers: " << threeIntResult << endl;  // Output: 6

    return 0;
}

#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    double numerator, denominator, result;

    try {
        cout << "Enter the numerator: ";
        if (!(cin >> numerator)) {  // Check for invalid input
            throw invalid_argument("Invalid input for numerator!");
        }

        cout << "Enter the denominator: ";
        if (!(cin >> denominator)) {  // Check for invalid input
            throw invalid_argument("Invalid input for denominator!");
        }

        if (denominator == 0) {  // Check for division by zero
            throw runtime_error("Division by zero is not allowed!");
        }

        result = numerator / denominator;  // Perform division
        cout << "Result: " << result << endl;

    } catch (const invalid_argument& e) {
        cerr << "Error: " << e.what() << endl;
    } catch (const runtime_error& e) {
        cerr << "Error: " << e.what() << endl;
    } catch (...) {
        cerr << "An unknown error occurred." << endl;
    }

    return 0;
}

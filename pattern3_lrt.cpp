#include <iostream>
using namespace std;

int main() {
    int rows;

    // Ask the user for the number of rows
    cout << "Enter the number of rows: ";
    cin >> rows;

    // Loop to print the lower right triangle pattern
    for (int i = 1; i <= rows; i++) {
        // Print spaces before stars
        for (int j = 1; j < rows - i +1; j++) {
            cout << "  "; // Print space
        }
        // Print stars
        for (int j = 1; j <= i; j++) {
            cout << "* "; // Print star (no space)
        }
        cout << endl; // Move to the next line after each row
    }

    return 0;
}

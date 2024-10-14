#include <iostream>
using namespace std;

int main() {
    int rows;

    // Ask the user for the number of rows
    cout << "Enter the number of rows: ";
    cin >> rows;

    // Loop to print the lower left triangle pattern
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* "; // Print star followed by a space
        }
        cout << endl; // Move to the next line after each row
    }

    return 0;
}

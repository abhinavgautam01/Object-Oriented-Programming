#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Input for matrix dimensions
    cout << "Enter the number of rows and columns: ";
    cin >> rows >> cols;

    // Declare the matrix
    int matrix[100][100];

    // Input matrix elements
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    // Calculate the sum of all elements
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += matrix[i][j];
        }
    }

    // Display the sum
    cout << "The sum of all elements in the matrix is: " << sum << endl;

    return 0;
}

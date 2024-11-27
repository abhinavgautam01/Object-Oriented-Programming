#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Input for matrix dimensions
    cout << "Enter the number of rows and columns: ";
    cin >> rows >> cols;

    // Declare matrices with fixed maximum size
    int matrixA[rows][cols], matrixB[rows][cols], sum[rows][cols];

    // Input for the first matrix
    cout << "Enter elements of the first matrix (A):" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrixA[i][j];
        }
    }

    // Input for the second matrix
    cout << "Enter elements of the second matrix (B):" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrixB[i][j];
        }
    }

    // Adding matrices
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }

    // Displaying the result
    cout << "Sum of the matrices (A + B) is:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

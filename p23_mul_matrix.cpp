#include <iostream>
using namespace std;

int main() {
    int rowsA, colsA, rowsB, colsB;

    // Input for the dimensions of the first matrix
    cout << "Enter the number of rows and columns for the first matrix (A): ";
    cin >> rowsA >> colsA;

    // Input for the dimensions of the second matrix
    cout << "Enter the number of rows and columns for the second matrix (B): ";
    cin >> rowsB >> colsB;

    // Check if multiplication is possible
    if (colsA != rowsB) {
        cout << "Error: The number of columns in matrix A must be equal to the number of rows in matrix B." << endl;
        return 1;
    }

    // Declare matrices with fixed maximum size
    int matrixA[100][100], matrixB[100][100], product[100][100];

    // Input for the first matrix
    cout << "Enter elements of the first matrix (A):" << endl;
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsA; j++) {
            cin >> matrixA[i][j];
        }
    }

    // Input for the second matrix
    cout << "Enter elements of the second matrix (B):" << endl;
    for (int i = 0; i < rowsB; i++) {
        for (int j = 0; j < colsB; j++) {
            cin >> matrixB[i][j];
        }
    }

    // Initialize product matrix to 0
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            product[i][j] = 0;
        }
    }

    // Multiplying matrices
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            for (int k = 0; k < colsA; k++) {
                product[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }

    // Displaying the result
    cout << "Product of the matrices (A * B) is:" << endl;
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            cout << product[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

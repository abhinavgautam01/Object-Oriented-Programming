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

    // Dynamic memory allocation for matrices
    int** matrixA = new int*[rowsA];
    int** matrixB = new int*[rowsB];
    int** product = new int*[rowsA];

    for (int i = 0; i < rowsA; i++)
        matrixA[i] = new int[colsA];

    for (int i = 0; i < rowsB; i++)
        matrixB[i] = new int[colsB];

    for (int i = 0; i < rowsA; i++)
        product[i] = new int[colsB]();

    // Input for first matrix
    cout << "Enter elements of the first matrix (A):" << endl;
    for (int i = 0; i < rowsA; i++)
        for (int j = 0; j < colsA; j++)
            cin >> matrixA[i][j];

    // Input for second matrix
    cout << "Enter elements of the second matrix (B):" << endl;
    for (int i = 0; i < rowsB; i++)
        for (int j = 0; j < colsB; j++)
            cin >> matrixB[i][j];

    // Multiplying matrices
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            product[i][j] = 0; // Initialize product matrix element
            for (int k = 0; k < colsA; k++) {
                product[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }

    // Displaying the result
    cout << "Product of the matrices (A * B) is:" << endl;
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++)
            cout << product[i][j] << " ";
        cout << endl;
    }

    // Freeing allocated memory
    for (int i = 0; i < rowsA; i++)
        delete[] matrixA[i];
    for (int i = 0; i < rowsB; i++)
        delete[] matrixB[i];
    for (int i = 0; i < rowsA; i++)
        delete[] product[i];

    delete[] matrixA;
    delete[] matrixB;
    delete[] product;

    return 0;
}

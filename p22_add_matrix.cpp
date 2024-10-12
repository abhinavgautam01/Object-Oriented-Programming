#include <iostream>

using namespace std;

int main() {
    int rows, cols;

    // Input for matrix dimensions
    cout << "Enter the number of rows and columns: ";
    cin >> rows >> cols;

    // Dynamic memory allocation for matrices
    int** matrixA = new int*[rows];
    int** matrixB = new int*[rows];
    int** sum = new int*[rows];

    for (int i = 0; i < rows; i++) {
        matrixA[i] = new int[cols];
        matrixB[i] = new int[cols];
        sum[i] = new int[cols];
    }

    // Input for first matrix
    cout << "Enter elements of the first matrix (A):" << endl;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> matrixA[i][j];

    // Input for second matrix
    cout << "Enter elements of the second matrix (B):" << endl;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> matrixB[i][j];

    // Adding matrices
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            sum[i][j] = matrixA[i][j] + matrixB[i][j];

    // Displaying the result
    cout << "Sum of the matrices (A + B) is:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            cout << sum[i][j] << " ";
        cout << endl;
    }

    // Freeing allocated memory
    for (int i = 0; i < rows; i++) {
        delete[] matrixA[i];
        delete[] matrixB[i];
        delete[] sum[i];
    }
    delete[] matrixA;
    delete[] matrixB;
    delete[] sum;

    return 0;
}

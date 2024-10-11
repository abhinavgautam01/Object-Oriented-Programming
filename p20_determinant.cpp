#include <iostream>

using namespace std;

// Function to calculate the determinant of a 3x3 matrix
double determinant3x3(double matrix[3][3]) {
    return matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1]) -
           matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0]) +
           matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]);
}

int main() {
    double matrix[3][3];

    // Input matrix elements from the user
    cout << "Enter the elements of a 3x3 matrix:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Element [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matrix[i][j];
        }
    }

    // Calculate and display the determinant
    cout << "Determinant: " << determinant3x3(matrix) << endl;
    return 0;
}

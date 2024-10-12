#include <iostream>
#include <iomanip>

using namespace std;

// Function to calculate the inverse of a 2x2 matrix
bool inverse(float matrix[2][2], float inverse[2][2]) {
    float det = matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];

    if (det == 0) {
        cout << "Matrix is singular, cannot find inverse." << endl;
        return false;
    }

    inverse[0][0] = matrix[1][1] / det;
    inverse[0][1] = -matrix[0][1] / det;
    inverse[1][0] = -matrix[1][0] / det;
    inverse[1][1] = matrix[0][0] / det;

    return true;
}

int main() {
    float matrix[2][2];
    float inv[2][2];

    cout << "Enter the elements of the 2x2 matrix:" << endl;
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            cin >> matrix[i][j];

    if (inverse(matrix, inv)) {
        cout << "Inverse of the matrix is:" << endl;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++)
                cout << fixed << setprecision(2) << inv[i][j] << " ";
            cout << endl;
        }
    }

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int x, y, z;

    // Input dimensions of the 3D array
    cout << "Enter the dimensions of the 3D array (x, y, z): ";
    cin >> x >> y >> z;

    // Check if matrices are square
    if (y != z) {
        cout << "For diagonal matrices, the number of rows and columns (y, z) must be equal." << endl;
        return 1;
    }

    // Declare a 3D array
    int arr[10][10][10]; // Max size for simplicity

    // Input the elements of the 3D array
    cout << "Enter the elements of the 3D array:" << endl;
    for (int i = 0; i < x; i++) {
        cout << "Matrix " << i + 1 << ":" << endl;
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                cout << "Element [" << i << "][" << j << "][" << k << "]: ";
                cin >> arr[i][j][k];
            }
        }
    }

    // Display diagonal elements for each 2D matrix
    cout << "\nDiagonal elements of each 2D matrix:" << endl;
    for (int i = 0; i < x; i++) {
        cout << "Diagonal of Matrix " << i + 1 << ": ";
        for (int j = 0; j < y; j++) {
            cout << arr[i][j][j] << " "; // Diagonal elements occur when row == column
        }
        cout << endl;
    }

    return 0;
}

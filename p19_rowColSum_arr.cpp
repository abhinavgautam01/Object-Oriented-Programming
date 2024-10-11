#include <iostream>
using namespace std;

int main() {
    const int rows = 3; // You can change the size as needed
    const int cols = 3; // You can change the size as needed

    int array[rows][cols];

    cout << "Enter elements of the 2D array (" << rows << "x" << cols << "):\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> array[i][j];
        }
    }

    int rowSum[rows] = {0};
    int colSum[cols] = {0};

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            rowSum[i] += array[i][j];
            colSum[j] += array[i][j];
        }
    }

    cout << "Row-wise sums:\n";
    for (int i = 0; i < rows; i++) {
        cout << "Sum of row " << i + 1 << ": " << rowSum[i] << endl;
    }

    cout << "Column-wise sums:\n";
    for (int j = 0; j < cols; j++) {
        cout << "Sum of column " << j + 1 << ": " << colSum[j] << endl;
    }

    return 0;
}


// [10:37 pm, 10/10/2024] Abhinav Gautam: 2d_array
// 1 wap to calculate row-wise and column-wise sum of 2D array
// 2 determinant of matrix 
// 3 Inverse of matrix
// 4 Matrix add and multiply 
// 5 Transpose of matrix 
// 6 Sum of elements present in matrix 
// 7 Sum of diagonal in matrix
// 8 Rotate 2d array 90 degree clockwise or anticlockwise
// 9 Print upper triangular matrix and lower triangular matrix
// 3d_array...
// [10:39 pm, 10/10/2024] Abhinav Gautam: 3d_array
// 1. Transpose of matrix
// 2. Find min and Max elements
// 3. Count even and odd in 3d array
// 4. Find diagonal matrix in 3d array
// 5. Multiplication using 3d array
// string...
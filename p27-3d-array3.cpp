#include <iostream>
using namespace std;

int main() {
    int x, y, z;
    cout << "Enter dimensions of the 3D array (x y z): ";
    cin >> x >> y >> z;

    int arr[x][y][z];
    cout << "Enter elements of the array:\n";

    // Input the 3D array
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            for (int k = 0; k < z; ++k) {
                cin >> arr[i][j][k];
            }
        }
    }

    // Initialize min and max with the first element
    int minVal = arr[0][0][0];
    int maxVal = arr[0][0][0];

    // Find the min and max
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            for (int k = 0; k < z; ++k) {
                if (arr[i][j][k] < minVal) minVal = arr[i][j][k];
                if (arr[i][j][k] > maxVal) maxVal = arr[i][j][k];
            }
        }
    }

    cout << "Minimum value: " << minVal << endl;
    cout << "Maximum value: " << maxVal << endl;

    return 0;
}

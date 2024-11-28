#include <iostream>
using namespace std;

int main() {
    int x, y, z;

    // Input dimensions of the 3D array
    cout << "Enter the dimensions of the 3D array (x, y, z): ";
    cin >> x >> y >> z;

    // Declare a 3D array
    int arr[10][10][10]; // Max size for simplicity

    // Input the elements of the 3D array
    cout << "Enter the elements of the 3D array:" << endl;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                cout << "Element [" << i << "][" << j << "][" << k << "]: ";
                cin >> arr[i][j][k];
            }
        }
    }

    // Count even and odd numbers
    int evenCount = 0, oddCount = 0;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                if (arr[i][j][k] % 2 == 0)
                    evenCount++;
                else
                    oddCount++;
            }
        }
    }

    // Display the results
    cout << "Number of even numbers: " << evenCount << endl;
    cout << "Number of odd numbers: " << oddCount << endl;

    return 0;
}

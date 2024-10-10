#include <iostream>

using namespace std;

void deleteElement(int arr[], int &n, int position) {
    if (position < 0 || position >= n) {
        cout << "Invalid position!" << endl;
        return;
    }

    for (int i = position; i < n - 1; ++i) {
        arr[i] = arr[i + 1];
    }

    n--;
}

void displayArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[100];
    int n;

    cout << "Enter the number of elements in the array (up to 100): ";
    cin >> n;

    if (n < 1 || n > 100) {
        cout << "Invalid number of elements!" << endl;
        return 1;
    }

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Element " << (i + 1) << ": ";
        cin >> arr[i];
    }

    cout << "Initial array: ";
    displayArray(arr, n);

    int position;

    cout << "Enter the position to delete (0 to " << (n - 1) << "): ";
    cin >> position;

    deleteElement(arr, n, position);

    cout << "Updated array: ";
    displayArray(arr, n);

    return 0;
}

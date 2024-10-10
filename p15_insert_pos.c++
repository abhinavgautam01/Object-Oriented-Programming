#include <iostream>

using namespace std;

void insertElement(int arr[], int &n, int element, int position) {
    if (position < 0 || position > n) {
        cout << "Invalid position!" << endl;
        return;
    }

    for (int i = n; i > position; --i) {
        arr[i] = arr[i - 1];
    }

    arr[position] = element;
    n++;
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

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Element " << (i + 1) << ": ";
        cin >> arr[i];
    }

    cout << "Initial array: ";
    displayArray(arr, n);

    int element, position;

    cout << "Enter the element to insert: ";
    cin >> element;
    cout << "Enter the position to insert (0 to " << n << "): ";
    cin >> position;

    insertElement(arr, n, element, position);

    cout << "Updated array: ";
    displayArray(arr, n);

    return 0;
}

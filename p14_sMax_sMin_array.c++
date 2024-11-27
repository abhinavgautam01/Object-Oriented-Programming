#include <iostream>
using namespace std;

void findSecondMaxMin(int arr[], int n, int &secondMax, int &secondMin) {
    if (n < 2) {
        cout << "Array must have at least two elements." << endl;
        return;
    }

    // Initialize max and min with the first element of the array
    int max = arr[0];
    int min = arr[0];
    secondMax = -1; // Placeholder for no second max
    secondMin = -1; // Placeholder for no second min

    // Find the max and min values
    for (int i = 1; i < n; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // Find second max and second min values
    for (int i = 0; i < n; ++i) {
        if (arr[i] > secondMax && arr[i] < max) {
            secondMax = arr[i];
        }
        if (arr[i] < secondMin && arr[i] > min) {
            secondMin = arr[i];
        }
    }

    // If no valid second max or second min found, set to -1
    if (secondMax == -1 || secondMax == max) secondMax = -1;
    if (secondMin == -1 || secondMin == min) secondMin = -1;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    if (n < 2) {
        cout << "You must enter at least two elements." << endl;
        return 1;
    }

    int arr[n];
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Element " << (i + 1) << ": ";
        cin >> arr[i];
    }

    int secondMax, secondMin;
    findSecondMaxMin(arr, n, secondMax, secondMin);

    cout << "Second Maximum: " << (secondMax == -1 ? -1 : secondMax) << endl;
    cout << "Second Minimum: " << (secondMin == -1 ? -1 : secondMin) << endl;

    return 0;
}

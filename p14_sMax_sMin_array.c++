#include <iostream>
#include <limits>

using namespace std;

void findSecondMaxMin(int arr[], int n, int &secondMax, int &secondMin) {
    if (n < 2) {
        cout << "Array must have at least two elements." << endl;
        return;
    }

    int max = numeric_limits<int>::min();
    int min = numeric_limits<int>::max();
    secondMax = numeric_limits<int>::min();
    secondMin = numeric_limits<int>::max();

    for (int i = 0; i < n; ++i) {
        if (arr[i] > max) {
            secondMax = max;
            max = arr[i];
        } else if (arr[i] > secondMax && arr[i] < max) {
            secondMax = arr[i];
        }

        if (arr[i] < min) {
            secondMin = min;
            min = arr[i];
        } else if (arr[i] < secondMin && arr[i] > min) {
            secondMin = arr[i];
        }
    }
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

    cout << "Second Maximum: " << (secondMax == numeric_limits<int>::min() ? -1 : secondMax) << endl;
    cout << "Second Minimum: " << (secondMin == numeric_limits<int>::max() ? -1 : secondMin) << endl;

    return 0;
}

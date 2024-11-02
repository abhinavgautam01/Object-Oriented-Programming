#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function for linear search
int linearSearch(const vector<int>& arr, int target) {
    for (size_t i = 0; i < arr.size(); ++i) {
        if (arr[i] == target) {
            return i; // Return index if found
        }
    }
    return -1; // Return -1 if not found
}

// Function for binary search
int binarySearch(const vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid; // Return index if found
        }
        if (arr[mid] < target) {
            left = mid + 1; // Search in the right half
        } else {
            right = mid - 1; // Search in the left half
        }
    }
    return -1; // Return -1 if not found
}

int main() {
    int choice, target, n;

    // Input array size
    cout << "Enter number of elements in the array: ";
    cin >> n;
    vector<int> arr(n);

    // Input array elements
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Ask user for search option
    cout << "Choose search method:\n";
    cout << "1. Linear Search\n";
    cout << "2. Binary Search (Array must be sorted)\n";
    cin >> choice;

    // Input the target element to search
    cout << "Enter the element to search: ";
    cin >> target;

    int result = -1;

    if (choice == 1) {
        result = linearSearch(arr, target);
    } else if (choice == 2) {
        // Sort the array for binary search
        sort(arr.begin(), arr.end());
        cout << "Sorted array for binary search:\n";
        for (int i : arr) {
            cout << i << " ";
        }
        cout << endl;
        result = binarySearch(arr, target);
    } else {
        cout << "Invalid choice!" << endl;
        return 1;
    }

    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}

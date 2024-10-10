#include <iostream>

using namespace std;

int main() {
    int arr[100], freq[100];
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
        freq[i] = -1; // Initialize frequency array
    }

    for (int i = 0; i < n; i++) {
        if (freq[i] == -1) {
            freq[i] = 1; // Count the frequency of arr[i]
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    freq[i]++;
                    freq[j] = 0; // Mark as counted
                }
            }
        }
    }

    cout << "Element | Frequency" << endl;
    cout << "---------------------" << endl;
    for (int i = 0; i < n; i++) {
        if (freq[i] != 0) {
            cout << "   " << arr[i] << "    |    " << freq[i] << endl;
        }
    }

    return 0;
}

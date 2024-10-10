#include <iostream>

using namespace std;

// Function to find the GCD of two numbers
int greatestCommonDivisor(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to find the HCF of n numbers
int findHCF(int arr[], int n) {
    int hcf = arr[0];
    for (int i = 1; i < n; i++) {
        hcf = greatestCommonDivisor(hcf, arr[i]);
    }
    return hcf;
}

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    if (n < 1) {
        cout << "Invalid number of elements!" << endl;
        return 1;
    }

    int arr[n];
    cout << "Enter the elements:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Element " << (i + 1) << ": ";
        cin >> arr[i];
    }

    int hcf = findHCF(arr, n);
    cout << "HCF of the given numbers is: " << hcf << endl;

    return 0;
}

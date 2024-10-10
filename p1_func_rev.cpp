#include <iostream>
using namespace std;

// Function to reverse a number
int reverseNumber(int num) {
    int reversed = 0;
    while (num != 0) {
        int digit = num % 10; // Get the last digit
        reversed = reversed * 10 + digit; // Build the reversed number
        num /= 10; // Remove the last digit
    }
    return reversed;
}

int main() {
    int number;

    // Input a number from the user
    cout << "Enter an integer: ";
    cin >> number;

    // Call the reverse function and display the result
    int reversedNumber = reverseNumber(number);
    cout << "Reversed number: " << reversedNumber << endl;

    return 0;
}

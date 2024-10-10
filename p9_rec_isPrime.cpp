#include <iostream>
using namespace std;

bool isPrimeHelper(int num, int divisor) {
    if (divisor <= 1) return true;
    if (num % divisor == 0) return false;
    return isPrimeHelper(num, divisor - 1);
}

bool isPrime(int num) {
    if (num <= 1) return false;
    return isPrimeHelper(num, num / 2);
}

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    if (isPrime(number)) {
        cout << number << " is a prime number." << endl;
    } else {
        cout << number << " is not a prime number." << endl;
    }

    return 0;
}

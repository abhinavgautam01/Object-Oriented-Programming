#include <iostream>
using namespace std;

int sumNaturalNumbers(int n) {
    if (n <= 0) return 0;
    return n + sumNaturalNumbers(n - 1);
}

int main() {
    int n;
    cout << "Enter a natural number: ";
    cin >> n;

    int sum = sumNaturalNumbers(n);
    cout << "Sum of the first " << n << " natural numbers is: " << sum << endl;

    return 0;
}

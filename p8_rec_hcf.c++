#include <iostream>
using namespace std;

int findHCF(int a, int b) {
    if (b == 0) return a;
    return findHCF(b, a % b);
}

int main() {
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    int hcf = findHCF(num1, num2);
    cout << "HCF of " << num1 << " and " << num2 << " is: " << hcf << endl;

    return 0;
}

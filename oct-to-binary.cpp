#include <iostream>
#include <string>
using namespace std;

int main() {
    int octal;
    cout << "Enter an octal number: ";
    cin >> octal;

    string binary = "";

    while (octal > 0) {
        int digit = octal % 10;   // extract last octal digit
        octal /= 10;

        // convert octal digit (0–7) to 3-bit binary using loop
        string bits = "";
        int temp = digit;
        for (int i = 0; i < 3; i++) {
            bits = char('0' + (temp % 2)) + bits; // prepend '0' or '1'
            temp /= 2;
        }

        binary = bits + binary; // prepend this 3-bit group
    }

    // remove leading zeros but keep at least one digit
    int i = 0;
    while (i < (int)binary.size() - 1 && binary[i] == '0') i++;
    binary = binary.substr(i);

    cout << "Binary equivalent: " << binary << endl;
    return 0;
}
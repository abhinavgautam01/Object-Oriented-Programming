#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int main() {
    int num1 = 5, num2 = 10;
    cout << "Sum: " << add(num1, num2) << endl;
    return 0;
}

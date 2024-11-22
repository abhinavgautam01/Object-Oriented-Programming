#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    // `argc` gives the count of arguments passed (including program name)
    // `argv` is an array of pointers to the arguments (strings)

    cout << "Number of arguments: " << argc << endl;

    // Display each argument
    cout << "Arguments passed:" << endl;
    for (int i = 0; i < argc; i++) {
        cout << "Argument " << i << ": " << argv[i] << endl;
    }

    return 0;
}

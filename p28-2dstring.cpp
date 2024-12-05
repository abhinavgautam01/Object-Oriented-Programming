#include <iostream>
#include <string>
using namespace std;
const int ROWS = 3;
const int COLS = 3;

class StringMatrix {
private:
    string matrix[ROWS][COLS];

public:
    void setValue(int row, int col, const string& value) {
        matrix[row][col] = value;
    }

    string getValue(int row, int col) const {
        return matrix[row][col];
    }

    void printMatrix() const {
        for (int i = 0; i < ROWS; ++i) {
            for (int j = 0; j < COLS; ++j) {
                cout << matrix[i][j] << "\t";
            }
            cout << endl;
        }
    }
};

int main() {
    StringMatrix stringTable;
    
    stringTable.setValue(0, 0, "Hello");
    stringTable.setValue(1, 0, "World");
    stringTable.setValue(2, 0, "C++");

    stringTable.printMatrix();

    return 0;
}
#include <iostream>
using namespace std;

// Base class
class Base {
protected:
    int baseValue;

public:
    // Constructor
    Base(int value) : baseValue(value) {}

    // Function to display the base value
    void showBaseValue() {
        cout << "Base value: " << baseValue << endl;
    }
};

// Derived class inheriting from Base
class Derived : public Base {
private:
    int derivedValue;

public:
    // Constructor (calls Base class constructor)
    Derived(int baseVal, int derivedVal) : Base(baseVal), derivedValue(derivedVal) {}

    // Function to display the derived value
    void showDerivedValue() {
        cout << "Derived value: " << derivedValue << endl;
    }

    // Function to show both base and derived values
    void showBothValues() {
        showBaseValue(); // Accessing base class method
        cout << "Derived value: " << derivedValue << endl;
    }
};

int main() {
    // Create an object of the Derived class
    Derived obj(10, 20);

    // Call functions of Derived class
    obj.showBothValues();

    return 0;
}

#include <iostream>
using namespace std;

// Base class 1
class Mammal {
public:
    void feedMilk() {
        cout << "This mammal feeds milk to its young." << endl;
    }
};

// Base class 2
class Bird {
public:
    void layEggs() {
        cout << "This bird lays eggs." << endl;
    }
};

// Derived class
class Bat : public Mammal, public Bird {
public:
    void fly() {
        cout << "The bat can fly." << endl;
    }
};

int main() {
    Bat bat;

    cout << "Bat's abilities:" << endl;
    bat.feedMilk();   // From Mammal
    bat.layEggs();    // From Bird
    bat.fly();        // From Bat

    return 0;
}

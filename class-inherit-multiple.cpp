#include <iostream>
using namespace std;

// Base class 1
class Engine {
public:
    void startEngine() {
        cout << "Engine started." << endl;
    }
};

// Base class 2
class Wheels {
public:
    void rotateWheels() {
        cout << "Wheels are rotating." << endl;
    }
};

// Derived class (inherits from both Engine and Wheels)
class Car : public Engine, public Wheels {
public:
    void displayCarInfo() {
        cout << "This is a car with both engine and wheels." << endl;
    }
};

int main() {
    Car myCar;

    // Accessing methods from both base classes
    myCar.startEngine();   // From Engine
    myCar.rotateWheels();   // From Wheels
    myCar.displayCarInfo(); // From Car

    return 0;
}

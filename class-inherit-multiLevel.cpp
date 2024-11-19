#include <iostream>
using namespace std;

// Base class
class Vehicle {
public:
    void displayVehicleType() {
        cout << "This is a vehicle." << endl;
    }
};

// Derived class (inherits from Vehicle)
class Car : public Vehicle {
public:
    void displayCarType() {
        cout << "This is a car." << endl;
    }
};

// Further derived class (inherits from Car)
class SportsCar : public Car {
public:
    void displaySportsCarFeatures() {
        cout << "This is a sports car with high performance!" << endl;
    }
};

int main() {
    SportsCar mySportsCar;

    // Accessing methods from all levels of inheritance
    mySportsCar.displayVehicleType();        // From Vehicle
    mySportsCar.displayCarType();            // From Car
    mySportsCar.displaySportsCarFeatures();  // From SportsCar

    return 0;
}

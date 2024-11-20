#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "This animal eats food." << endl;
    }
};

// Derived class 1
class Dog : public Animal {
public:
    void bark() {
        cout << "The dog barks." << endl;
    }
};

// Derived class 2
class Cat : public Animal {
public:
    void meow() {
        cout << "The cat meows." << endl;
    }
};

int main() {
    // Object of derived class Dog
    Dog myDog;
    myDog.eat(); // Inherited from Animal
    myDog.bark(); // Specific to Dog

    // Object of derived class Cat
    Cat myCat;
    myCat.eat(); // Inherited from Animal
    myCat.meow(); // Specific to Cat

    return 0;
}

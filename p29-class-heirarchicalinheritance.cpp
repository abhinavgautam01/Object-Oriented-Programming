#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "This animal can eat." << endl;
    }

    void sleep() {
        cout << "This animal can sleep." << endl;
    }
};

// Derived class 1
class Dog : public Animal {
public:
    void bark() {
        cout << "The dog barks: Woof Woof!" << endl;
    }
};

// Derived class 2
class Cat : public Animal {
public:
    void meow() {
        cout << "The cat meows: Meow Meow!" << endl;
    }
};

int main() {
    Dog dog;
    Cat cat;

    cout << "Dog actions:" << endl;
    dog.eat();
    dog.sleep();
    dog.bark();

    cout << "\nCat actions:" << endl;
    cat.eat();
    cat.sleep();
    cat.meow();

    return 0;
}

#include <iostream>
class Animal {
public:
    virtual void sound() { // Virtual method
        std::cout << "Some animal sound." << std::endl;
    }
};

class Dog : public Animal {
public:
    void sound() override { // Override base class method
        std::cout << "Bark" << std::endl;
    }
};

class Cat : public Animal {
public:
    void sound() override { // Override base class method
        std::cout << "Meow" << std::endl;
    }
};

// Usage
void makeSound(Animal* animal) {
    animal->sound(); // Polymorphic behavior
}

int main() {
    Dog dog;
    Cat cat;
    makeSound(&dog); // Output: Bark
    makeSound(&cat); // Output: Meow
    return 0;
}

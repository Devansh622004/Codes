#include <iostream>
using namespace std;

// Base Class
class Animal {
public:
    // Virtual function
    virtual void makeSound() const {
        cout << "Animal makes a sound." << endl;
    }

    // Virtual destructor (important for polymorphism)
    virtual ~Animal() {}
};

// Derived Class - Lion
class Lion : public Animal {
public:
    void makeSound() const override {
        cout << "Lion: Roar" << endl;
    }
};

// Derived Class - Elephant
class Elephant : public Animal {
public:
    void makeSound() const override {
        cout << "Elephant: Trumpet" << endl;
    }
};

// Derived Class - Monkey
class Monkey : public Animal {
public:
    void makeSound() const override {
        cout << "Monkey: Ooh Ooh Aah Aah" << endl;
    }
};

int main() {

    // Array of base class pointers (Polymorphism)
    Animal* zoo[3];

    zoo[0] = new Lion();
    zoo[1] = new Elephant();
    zoo[2] = new Monkey();

    // Call makeSound() using polymorphism
    for (int i = 0; i < 3; i++) {
        zoo[i]->makeSound();
    }

    // Free allocated memory
    for (int i = 0; i < 3; i++) {
        delete zoo[i];
    }

    return 0;
}
#include <iostream>
using namespace std;

class Animal {
public:
    Animal() {}
    virtual ~Animal() {}
    virtual void makeSound() const = 0;
};

class Dog : public Animal {
public:
    void makeSound() const override {
        cout << "港港! (Woof!)" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() const override {
        cout << "具克~ (Meow~)" << endl;
    }
};

class Cow : public Animal {
public:
    void makeSound() const override {
        cout << "澜皋~ (Moo~)" << endl;
    }
};

int main() {
    const int NUM_ANIMALS = 3;
    Animal* animals[NUM_ANIMALS];

    animals[0] = new Dog();
    animals[1] = new Cat();
    animals[2] = new Cow();

    for (int i = 0; i < NUM_ANIMALS; ++i) {
        animals[i]->makeSound();
    }

    for (int i = 0; i < NUM_ANIMALS; ++i) {
        delete animals[i];
    }

    return 0;
}
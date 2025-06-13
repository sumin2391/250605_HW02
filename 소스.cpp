#include <iostream>

class Animal {
public:
    Animal() {
        std::cout << "  [Animal ������ ȣ��]" << std::endl;
    }
    virtual ~Animal() {
        std::cout << "  [Animal �Ҹ��� ȣ��]" << std::endl;
    }
    virtual void makeSound() const = 0;
};

class Dog : public Animal {
public:
    Dog() {
        std::cout << "    �� Dog ������ ȣ��" << std::endl;
    }
    ~Dog() {
        std::cout << "    �� Dog �Ҹ��� ȣ��" << std::endl;
    }
    void makeSound() const override {
        std::cout << "�۸�! (Woof!)" << std::endl;
    }
};

class Cat : public Animal {
public:
    Cat() {
        std::cout << "    �� Cat ������ ȣ��" << std::endl;
    }
    ~Cat() {
        std::cout << "    �� Cat �Ҹ��� ȣ��" << std::endl;
    }
    void makeSound() const override {
        std::cout << "�߿�~ (Meow~)" << std::endl;
    }
};

class Cow : public Animal {
public:
    Cow() {
        std::cout << "    �� Cow ������ ȣ��" << std::endl;
    }
    ~Cow() {
        std::cout << "    �� Cow �Ҹ��� ȣ��" << std::endl;
    }
    void makeSound() const override {
        std::cout << "����~ (Moo~)" << std::endl;
    }
};

int main() {
    const int NUM_ANIMALS = 3;
    Animal* animals[NUM_ANIMALS];

    std::cout << "--- ���� ��ü ���� ���� ���� ---" << std::endl;
    animals[0] = new Dog();
    animals[1] = new Cat();
    animals[2] = new Cow();
    std::cout << "--- ���� ��ü ���� ���� �Ϸ� ---\n" << std::endl;

    std::cout << "--- ��� ������ �Ҹ��� ���ϴ� ---" << std::endl;
    for (int i = 0; i < NUM_ANIMALS; ++i) {
        animals[i]->makeSound();
    }
    std::cout << "--------------------------------\n" << std::endl;

    std::cout << "--- ���� ��ü �޸� ���� ���� ---" << std::endl;
    for (int i = 0; i < NUM_ANIMALS; ++i) {
        delete animals[i];
    }
    std::cout << "--- ���� ��ü �޸� ���� �Ϸ� ---" << std::endl;

    return 0;
}
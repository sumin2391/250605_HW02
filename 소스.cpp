#include <iostream>

class Animal {
public:
    Animal() {
        std::cout << "  [Animal 생성자 호출]" << std::endl;
    }
    virtual ~Animal() {
        std::cout << "  [Animal 소멸자 호출]" << std::endl;
    }
    virtual void makeSound() const = 0;
};

class Dog : public Animal {
public:
    Dog() {
        std::cout << "    ㄴ Dog 생성자 호출" << std::endl;
    }
    ~Dog() {
        std::cout << "    ㄴ Dog 소멸자 호출" << std::endl;
    }
    void makeSound() const override {
        std::cout << "멍멍! (Woof!)" << std::endl;
    }
};

class Cat : public Animal {
public:
    Cat() {
        std::cout << "    ㄴ Cat 생성자 호출" << std::endl;
    }
    ~Cat() {
        std::cout << "    ㄴ Cat 소멸자 호출" << std::endl;
    }
    void makeSound() const override {
        std::cout << "야옹~ (Meow~)" << std::endl;
    }
};

class Cow : public Animal {
public:
    Cow() {
        std::cout << "    ㄴ Cow 생성자 호출" << std::endl;
    }
    ~Cow() {
        std::cout << "    ㄴ Cow 소멸자 호출" << std::endl;
    }
    void makeSound() const override {
        std::cout << "음메~ (Moo~)" << std::endl;
    }
};

int main() {
    const int NUM_ANIMALS = 3;
    Animal* animals[NUM_ANIMALS];

    std::cout << "--- 동물 객체 동적 생성 시작 ---" << std::endl;
    animals[0] = new Dog();
    animals[1] = new Cat();
    animals[2] = new Cow();
    std::cout << "--- 동물 객체 동적 생성 완료 ---\n" << std::endl;

    std::cout << "--- 모든 동물이 소리를 냅니다 ---" << std::endl;
    for (int i = 0; i < NUM_ANIMALS; ++i) {
        animals[i]->makeSound();
    }
    std::cout << "--------------------------------\n" << std::endl;

    std::cout << "--- 동물 객체 메모리 해제 시작 ---" << std::endl;
    for (int i = 0; i < NUM_ANIMALS; ++i) {
        delete animals[i];
    }
    std::cout << "--- 동물 객체 메모리 해제 완료 ---" << std::endl;

    return 0;
}
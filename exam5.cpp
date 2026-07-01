#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() = 0;
    virtual void move() = 0;

    virtual ~Animal() {}
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog: Bark!" << endl;
    }

    void move() override {
        cout << "Dog runs." << endl;
    }
};

class Bird : public Animal {
public:
    void sound() override {
        cout << "Bird: Chirp!" << endl;
    }

    void move() override {
        cout << "Bird flies." << endl;
    }
};

int main() {
    Animal* animals[2];

    animals[0] = new Dog();
    animals[1] = new Bird();

    for (int i = 0; i < 2; i++) {
        animals[i]->sound();
        animals[i]->move();
        cout << endl;
    }

    for (int i = 0; i < 2; i++) {
        delete animals[i];
    }

    return 0;
}
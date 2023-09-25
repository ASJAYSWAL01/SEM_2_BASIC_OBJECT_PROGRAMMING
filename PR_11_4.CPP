#include <iostream>

class Base {
public:
    Base() {
        std::cout << "Base class constructor called" << std::endl;
    }
};

class Derived : public Base {
public:
    Derived() {
        std::cout << "Derived class constructor called" << std::endl;
    }
};

int main() {
    Derived obj; // Creating an object of the Derived class

    return 0;
}

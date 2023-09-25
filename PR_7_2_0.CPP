#include <iostream>

class MyClass {
private:
    static int staticData; // Static data member

public:
    static void staticFunction() {
        std::cout << "Static function called" << std::endl;
        std::cout << "Static data: " << staticData << std::endl;
    }
};

int MyClass::staticData = 10; // Initialize the static data member

int main() {
    MyClass::staticFunction(); // Call the static member function

    return 0;
}

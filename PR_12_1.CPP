#include <iostream>

int main() {
    int number = 10;
    int* pointer = &number;  // Creating a pointer and assigning the address of 'number' to it

    std::cout << "Value of number: " << number << std::endl;
    std::cout << "Address of number: " << &number << std::endl;
    std::cout << "Value stored in pointer: " << *pointer << std::endl;  // Dereferencing the pointer to access the value

    *pointer = 20;  // Changing the value of 'number' through the pointer

    std::cout << "New value of number: " << number << std::endl;

    return 0;
}

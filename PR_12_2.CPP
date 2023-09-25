#include <iostream>

// Base class
class Vehicle {
public:
    void display() {
        std::cout << "This is a vehicle." << std::endl;
    }
};

// Derived class 'TwoWheeler' inheriting from 'Vehicle'
class TwoWheeler : public Vehicle {
public:
    void display() {
        std::cout << "This is a two-wheeler." << std::endl;
    }
};

// Derived class 'FourWheeler' inheriting from 'Vehicle'
class FourWheeler : public Vehicle {
public:
    void display() {
        std::cout << "This is a four-wheeler." << std::endl;
    }
};

int main() {
    Vehicle vehicle;
    TwoWheeler twoWheeler;
    FourWheeler fourWheeler;

    vehicle.display();       // Calls display() from 'Vehicle' class
    twoWheeler.display();    // Calls display() from 'TwoWheeler' class
    fourWheeler.display();   // Calls display() from 'FourWheeler' class

    return 0;
}

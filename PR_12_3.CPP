#include <iostream>

// Base class: Vehicle
class Vehicle {
public:
    virtual float calculateMileage() = 0; // Pure virtual function to calculate mileage
};

// Derived class: TwoWheeler (inherits from Vehicle)
class TwoWheeler : public Vehicle {
public:
    float calculateMileage() override {
        return 50.0f; // Assuming a mileage of 50 km/l for two-wheelers
    }
};

// Derived class: Bicycle (inherits from TwoWheeler)
class Bicycle : public TwoWheeler {
};

// Derived class: Scooter (inherits from TwoWheeler)
class Scooter : public TwoWheeler {
};

// Derived class: FourWheeler (inherits from Vehicle)
class FourWheeler : public Vehicle {
public:
    float calculateMileage() override {
        return 12.5f; // Assuming a mileage of 12.5 km/l for four-wheelers
    }
};

// Derived class: DieselVehicle (inherits from FourWheeler)
class DieselVehicle : public FourWheeler {
};

// Derived class: PetrolVehicle (inherits from FourWheeler)
class PetrolVehicle : public FourWheeler {
};

int main() {
    Bicycle bicycle;
    Scooter scooter;
    DieselVehicle dieselVehicle;
    PetrolVehicle petrolVehicle;

    std::cout << "Bicycle Mileage: " << bicycle.calculateMileage() << " km/l" << std::endl;
    std::cout << "Scooter Mileage: " << scooter.calculateMileage() << " km/l" << std::endl;
    std::cout << "Diesel Vehicle Mileage: " << dieselVehicle.calculateMileage() << " km/l" << std::endl;
    std::cout << "Petrol Vehicle Mileage: " << petrolVehicle.calculateMileage() << " km/l" << std::endl;

    return 0;
}

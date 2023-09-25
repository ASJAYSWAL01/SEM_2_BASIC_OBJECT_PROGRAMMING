#include <iostream>
using namespace std;
class DistanceConverter {
private:
    double centimeters;

public:
    DistanceConverter(double cm) {
        centimeters = cm;
    }
    double toInches()
    {
        return centimeters / 2.54;
    }
    double toFeet() 
    {
        return centimeters / 30.48;
    }
    double toMeters() 
    {
        return centimeters / 100;
    }
    double toKilometers() 
    {
        return centimeters / 100000;
    }
};
int main() 
{
    double centimeters;
    cout << "Enter distance in centimeters: ";
    cin >> centimeters;

    DistanceConverter converter(centimeters);

    double inches = converter.toInches();
    double feet = converter.toFeet();
    double meters = converter.toMeters();
    double kilometers = converter.toKilometers();

    cout << "Inches: " << inches << endl;
    cout << "Feet: " << feet << endl;
    cout << "Meters: " << meters << endl;
    cout << "Kilometers: " << kilometers <<endl;

    return 0;
}

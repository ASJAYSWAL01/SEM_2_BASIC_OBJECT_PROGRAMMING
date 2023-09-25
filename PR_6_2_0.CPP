#include <iostream>
#include <string>

class Student {
public:
    std::string name;
    float spi;
};

int main() {
    const int numStudents = 10;
    Student students[numStudents];

    for (int i = 0; i < numStudents; i++) {
        std::cout << "Enter the name of student " << i + 1 << ": ";
        std::cin >> students[i].name;

        std::cout << "Enter the SPI of student " << i + 1 << ": ";
        std::cin >> students[i].spi;
    }

    int highestSPIIndex = 0;
    for (int i = 1; i < numStudents; i++) {
        if (students[i].spi > students[highestSPIIndex].spi) {
            highestSPIIndex = i;
        }
    }
    
        
    std::cout << "\nStudent with the highest SPI:\n";
    std::cout << "Name: " << students[highestSPIIndex].name << std::endl;
    std::cout << "SPI: " << students[highestSPIIndex].spi << std::endl;

    return 0;
}

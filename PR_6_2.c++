#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    float spi;

    void setData(string studentName, float studentSPI) 
    {
        name = studentName;
        spi = studentSPI;
    }
};

int main()
{
    const int numStudents = 10;
    Student students[numStudents];

    for (int i = 0; i < numStudents; i++) 
    {
        cout << "Enter the name of student " << (i + 1) << ": ";
        cin >> students[i].name;
        cout << "Enter the SPI of student " << (i + 1) << ": ";
        cin >> students[i].spi;
    }

    int highestSPIIndex = 0;
    for (int i = 1; i < numStudents; i++) {
        if (students[i].spi > students[highestSPIIndex].spi) {
            highestSPIIndex = i;
        }
    }

    cout << "\nStudent with the highest SPI:\n";
    cout << "Name: " << students[highestSPIIndex].name << endl;
    cout << "SPI: " << students[highestSPIIndex].spi << endl;

    return 0;
}

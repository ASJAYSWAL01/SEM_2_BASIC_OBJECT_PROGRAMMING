#include <iostream>
using namespace std;

double calculate_area(double radius, double pi = 3.14159)
{
    return pi * radius * radius;
}
int main()
{
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    double area = calculate_area(radius);
    cout << "The area of the circle is: " << area << endl;
    
    return 0;
}
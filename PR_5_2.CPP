#include <iostream>
#include <string>
using namespace std;
class Employee
{
private:
    int employeeNumber;
    string employeeName;
    double basic;
    double da;
    double it;
    double netSalary;

public:
    void getData();
    void calculateNetSalary();
    void printData();
};
void Employee::getData()
{
    cout << "Enter employee number: ";
    cin >> employeeNumber;
    cout << "Enter employee name: ";
    cin.ignore();
    getline(cin, employeeName);
    cout << "Enter basic salary: ";
    cin >> basic;
    cout << "Enter DA (Dearness Allowance): ";
    cin >> da;
    cout << "Enter IT (Income Tax): ";
    cin >> it;
}
void Employee::calculateNetSalary()
{
    netSalary = basic + da - it;
}
void Employee::printData()
{
    cout << "Employee Number: " << employeeNumber << endl;
    cout << "Employee Name: " << employeeName << endl;
    cout << "Basic Salary: " << basic << endl;
    cout << "DA (Dearness Allowance): " << da << endl;
    cout << "IT (Income Tax): " << it << endl;
    cout << "Net Salary: " << netSalary << endl;
}
int main()
{
    Employee emp;
    emp.getData();
    emp.calculateNetSalary();
    emp.printData();

    return 0;
}

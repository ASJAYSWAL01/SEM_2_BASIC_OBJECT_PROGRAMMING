#include <iostream>

inline int multiply(int a, int b)
{
    return a * b;
}
int main() 
{
    int num1, num2;
    std::cout << "Enter two numbers to multiply: ";
    std::cin >> num1 >> num2;
    std::cout << "Result: " << multiply(num1, num2) << std::endl;
    
    return 0;
}
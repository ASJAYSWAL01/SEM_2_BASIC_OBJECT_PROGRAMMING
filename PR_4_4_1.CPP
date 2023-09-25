#include <iostream>
#include <string>
using namespace std;

int max(int a, int b, int c)
{
    return max(max(a, b), c);
}
int main() 
{
    int num1, num2, num3;
    cout << "Enter three integers: ";
    cin >> num1 >> num2 >> num3;
    int max_num = max(num1, num2, num3);
    cout << "The maximum number is: " << max_num << endl;
    
    return 0;
}
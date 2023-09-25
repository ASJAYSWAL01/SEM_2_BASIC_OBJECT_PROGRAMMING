#include <iostream>
using namespace std;

void sortNumbers(int &a, int &b)
{
    if (a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
}

int main() 
{
    int num1, num2;
    cout<<"enter two numbers:";
    cin>>num1>>num2;
    cout << "Before sorting: num1 = " << num1 << ", num2 = " << num2 << endl;
    
    sortNumbers(num1, num2);
    
    cout << "After sorting: num1 = " << num1 << ", num2 = " << num2 << endl;
    return 0;
}
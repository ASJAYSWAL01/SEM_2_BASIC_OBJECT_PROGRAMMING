#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "enter a positive integer:";
    cin >> a;
    if ( a % 2 == 1)
    {
        cout << "Number is prime number";
    }
    else
    {
        cout << "number is not a prime number";
    }
    return 0;
}

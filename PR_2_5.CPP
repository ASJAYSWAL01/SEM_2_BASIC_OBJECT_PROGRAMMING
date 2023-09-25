#include <iostream>
int a = 10;
using namespace std;

int main()
{
    int a = 5;
    cout << "without scope resolution operator:" << a<<endl;
    cout << "with scope resolution operator:" << ::a<<endl;

return 0;
}

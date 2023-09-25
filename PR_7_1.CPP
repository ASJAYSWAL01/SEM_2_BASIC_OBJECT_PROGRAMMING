#include <iostream>
using namespace std;
class Number
{
private:
    static int count;

public:
    static void increment()
    {
        count++;
    }

    static int getCount()
    {
        return count;
    }
};

int Number::count = 0;

int main()
{
    cout << "Initial count: " << Number::getCount() << endl;

    for (int i = 0; i < 3; i++)
    {
        Number::increment();
    }

    cout << "Final count: " << Number::getCount() << endl;

    return 0;
}

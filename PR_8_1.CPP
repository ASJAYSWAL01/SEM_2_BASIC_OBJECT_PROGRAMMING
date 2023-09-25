#include <iostream>
using namespace std;

class Distance
{
    int feet;
    int inch;

public:
    void getdata()
    {
        cout << "Enter feet :";
        cin >> feet;
        cout << "Enter inch :";
        cin >> inch;
    }

    void putdata()
    {
        cout << "Input Values: " << endl;
        cout << feet << endl;
        cout << inch << endl;
    }

    int add()                     
    {
        cout << "Result: " << feet + inch;
    }
};
int main()
{
    Distance d;
    d.getdata();
    d.putdata();
    d.add();
}
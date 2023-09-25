#include <iostream>
using namespace std;

class abc
{
    int in;

public:
    void getin()
    {
        cin >> in;  
    }

    int putin()
    {
        cout << in;
        return in;
    }
};

class xyz : public abc
{
    int ft;

public:
    void getft()
    {
        cin >> ft;
    }

    void display()
    {
        int total;
        total = ft * 12 + putin();
        cout << total;
    }
};

int main()
{
    xyz a;
    a.getin();
    a.getft();
    a.display();
}
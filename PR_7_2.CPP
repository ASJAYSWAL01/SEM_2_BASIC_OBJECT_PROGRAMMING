#include <iostream>
using namespace std;

class demo
{
    int x, y;
    static int z; // Static Data Member

public:
    void getdata()
    {
        cout << "Enter Two Numbers:";
        cin >> x >> y;
    }
    void putdata()
    {
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    }
    static void print() // Static Member Function
    {
        cout << "Static Variable z:" << z;
    }
};
int demo::z;

int main()
{
    demo aa, bb;
    aa.getdata();
    bb.getdata();
    aa.putdata();
    bb.putdata();
    aa.print();
}
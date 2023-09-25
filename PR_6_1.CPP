#include <iostream>
#include <string.h>
using namespace std;

class EMPLOYEE
{
    int EMPcode;
    string EMPname;

public:
    void getdata();
    void display();
};
void EMPLOYEE::getdata()
{
    cout << "\tEnter Name : ";
    cin >> EMPname;

    cout << "\tEnter Code : ";
    cin >> EMPcode;
}
void EMPLOYEE::display()
{

    cout << "\tName : " << EMPname << endl;

    cout << "\tCode : " << EMPcode << endl;
}
int main()
{
    EMPLOYEE emp[6];
    int i;

    for (i = 1; i <= 6; i++)
    {

        cout << "*****Enter Data For Employee " << i << "*****" << endl;
        emp[i].getdata();

        cout << endl
        << endl;

        cout << "*****Details Of Employee " << i << "*****" << endl;
        emp[i].display();

        cout << "-------------------------------------------";
        cout << endl
             << endl;
    }

    return 0;
}

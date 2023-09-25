#include <iostream>
using namespace std;

class personal
{
protected:
    
    int age;

public:
    void getdata_p()
    {

        cout << "Enter the age :";
        cin >> age;
    }
};

class student
{
protected:
    int roll_no;

public:
    void getdata_s()
    {
        cout << "Enter the roll_no :";
        cin >> roll_no;
    }
};

class exam : public student, public personal
{
protected:
    int sub1;
    int sub2;

public:
    void getdata_e()
    {
        cout << "Enter sub1 :";
        cin >> sub1;
        cout << "Enter sub2 :";
        cin >> sub2;
    }

    void result()
    {
        int result;
        cout << "Result:" << sub1 + sub2;
        cout <<  age << roll_no << result;
    }
};

int main()
{
    exam e;
    e.getdata_e();
    e.getdata_p();
    e.getdata_s();
    e.result();

    return 0;
}

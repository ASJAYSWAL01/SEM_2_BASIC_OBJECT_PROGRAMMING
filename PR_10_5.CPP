#include <iostream>

using namespace std;

class person
{
public:
    
    int age;

    void getdata_a()
    {
        cin >> age;
    }
};

class student : public person
{
public:
    
    int roll_no;

    void getdata_b()
    {
        cin  >> roll_no;
    }
};

class exam : public student
{
    int sub1;
    int sub2;

public:
    void getdata_c()
    {
        cin >> sub1 >> sub2;
    }

    void display()
    {
        cout << age << roll_no << sub1 << sub2;
    }
};

int main()
{
    exam e;
    e.getdata_a();
    e.getdata_b();
    e.getdata_c();
    e.display();
}
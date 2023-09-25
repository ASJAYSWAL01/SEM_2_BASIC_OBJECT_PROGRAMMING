#include <iostream>
#include <string>
using namespace std;

struct College   
{
    string name;
    string Department;
    int collage_code;
    int intake;
};
int main()
{
    College my_college = {"GOVERNMENT POLYTECHNIC HIMATNAGAR", "COMPUTER ", 624, 60};
    cout << "College name:" << my_college.name << endl;
    cout << "Department:" << my_college.Department << endl;
    cout << "Code of collage:" << my_college.collage_code << endl;
    cout << "intake:" << my_college.intake << endl;

    return 0;
}

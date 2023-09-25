#include <iostream>
using namespace std;
class Item 
{
private:
    int num;
    double cost;
public:
    void getData();
    void putData();
};
void Item::getData() 
{
    cout << "Enter the numbers of item: ";
    cin >> num;
    cout << "Enter the cost of item: ";
    cin >> cost;
}
void Item::putData() 
{
    int amount;
    amount=num*cost;
    cout<<"total cost of item:"<<amount;
}
int main() 
{
    Item i;
    i.getData();
    i.putData();

    return 0;
}

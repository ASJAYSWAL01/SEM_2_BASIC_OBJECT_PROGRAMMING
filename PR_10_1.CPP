#include <iostream>
using namespace std;
class Distance {

    int feet;
    int inches;

public:
    Distance() {
        feet = 0;
        inches = 0;
    }

    Distance(int f, int i) {
        feet = f;
        inches = i;
    }

    void display() {
        cout << feet << " feet, " << inches << " inches" << endl;
    }
};


int main() {
    
    Distance d1;
    d1.display();


    Distance d2(3, 9);
    d2.display();

    return 0;
}

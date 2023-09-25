#include <iostream>

class Incrementer {
private:
    static int count; // Static variable to be incremented

public:
    static void increment() {
        count++;
    }

    static int getCount() {
        return count;
    }
};

int Incrementer::count   = 10; // Initialize the static variable

int main() {
    Incrementer::increment(); // First increment
    Incrementer::increment(); // Second increment
    Incrementer::increment(); // Third increment

    int result = Incrementer::getCount();
    std::cout << "Incremented Count is: " << result << std::endl;

    return 0;
}

#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string filename = "destination.txt"; // Replace with the path and name of your text file

    std::ifstream file(filename); // Open the file

    if (!file) {
        std::cout << "Failed to open the file." << std::endl;
        return 1;
    }

    int characterCount = 0;
    char ch;

    while (file.get(ch)) {
        characterCount++;
    }

    file.close(); // Close the file

    std::cout << "Number of characters in the file: " << characterCount << std::endl;

    return 0;
}

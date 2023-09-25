#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    string sourceFilename = "destination.txt";       // Replace with the path and name of the source text file
    string destinationFilename = "ic.txt"; // Replace with the path and name of the destination text file

    ifstream sourceFile(sourceFilename);       // Open the source file for reading
    ofstream destinationFile(destinationFilename); // Open the destination file for writing

    if (!sourceFile || !destinationFile) {
        cout << "Failed to open the file." << endl;
        return 1;
    }

    char ch;

    while (sourceFile.get(ch)) {
        destinationFile << ch; // Write the character to the destination file
    }

    sourceFile.close();       // Close the source file
    destinationFile.close();  // Close the destination file

    cout << "File copied successfully." << endl;

    return 0;
}

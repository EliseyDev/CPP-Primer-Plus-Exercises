#include <iostream>
#include <fstream>

int main() {
    std::string fileName;
    std::cout << "Enter filename to read it content: ";
    std::cin >> fileName;

    std::ifstream inFile;
    inFile.open(fileName);

    if (!inFile.is_open()) {
        std::cout << "ERROR while opening file" << std::endl << "Program terminates." << std::endl;
        exit(EXIT_FAILURE);
    }

    int countCharactersInFile = 0;
    std::cout << "Information contained in the file: " << std::endl;

    char ch;

    while (inFile.get(ch)) {
        ++countCharactersInFile;
        std::cout << ch;
    }

    std::cout << std::endl;

    if (inFile.eof()) {
        std::cout << "End of file reached." << std::endl;
    } else if (inFile.fail()) {
        std::cout << "Input terminated. Data mismatch." << std::endl;
    } else {
        std::cout << "Input terminated by unknown reason." << std::endl;
    }

    inFile.close();

    if (countCharactersInFile == 0) {
        std::cout << "No data processed." << std::endl;
    } else {
        std::cout << "Characters read: " << countCharactersInFile << std::endl;
    }

    return 0;
}
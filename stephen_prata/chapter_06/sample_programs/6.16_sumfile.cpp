// sumafile.cpp -- functions with an array argument

#include <iostream>
#include <fstream>
#include <cstdlib>

const int SIZE = 60;

int main() {
    char filename[SIZE];
    std::ifstream inFile;

    std::cout << "Enter name of data file: ";
    std::cin.getline(filename, SIZE);
    inFile.open(filename);

    if (!inFile.is_open()) {
        std::cout << "Could not open the file " << filename << std::endl;
        std::cout << "Program terminating." << std::endl;
        exit(EXIT_FAILURE);
    }

    double value;
    double sum = 0.0;
    int count = 0;
    inFile >> value;

    while (inFile.good()) {
        ++count;
        sum += value;
        inFile >> value;
    }

    if (inFile.eof()) {
        std::cout << "End of file reached." << std::endl;
    } else if (inFile.fail()) {
        std::cout << "Input terminated by data mismatch." << std::endl;
    } else {
        std::cout << "Input terminated for unknown reason." << std::endl;
    }

    if (count == 0) {
        std::cout << "No data processed." << std::endl;
    } else {
        std::cout << "Items read: " << count << std::endl;
        std::cout << "Sum: " << sum << std::endl;
        std::cout << "Average: " << sum / count << std::endl;
    }

    inFile.close();

    return 0;
}
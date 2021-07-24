#include <iostream>
#include <fstream>
#include <string>

struct maecenas {
    std::string name{};
    int donation{};
};

void printGrandPatrons(const maecenas *maecenases, size_t size);

void printPatrons(const maecenas *maecenases, size_t size);

int main() {
    std::ifstream inFile;
    std::string fileName;

    std::cout << "Enter filename: ";
    std::cin >> fileName;

    inFile.open(fileName);

    if (!inFile.is_open()) {
        std::cout << "ERROR! Cannot open file." << std::endl << "Program terminates." << std::endl;
        exit(EXIT_FAILURE);
    }

    size_t sizeOfMaecenases;

    inFile >> sizeOfMaecenases;
    inFile.get();

    auto *maecenases = new maecenas[sizeOfMaecenases];
    std::string name;

    for (int i = 0; i < sizeOfMaecenases; i++) {
        std::getline(inFile, maecenases[i].name);
        inFile >> maecenases[i].donation;
        inFile.get();
    }

    printGrandPatrons(maecenases, sizeOfMaecenases);
    printPatrons(maecenases, sizeOfMaecenases);

    inFile.close();
    delete[] maecenases;

    return 0;
}

void printPatrons(const maecenas *maecenases, size_t size) {
    std::cout << "Patrons:" << std::endl;
    int countPatrons = 0;

    for (int i = 0; i < size; i++) {
        if (maecenases[i].donation > 0 && maecenases[i].donation < 10000) {
            std::cout << "Name: " << maecenases[i].name << " donation: " << maecenases[i].donation << std::endl;
            ++countPatrons;
        }
    }
    if (!countPatrons) {
        std::cout << "none" << std::endl;
    }
}

void printGrandPatrons(const maecenas *maecenases, size_t size) {
    std::cout << "Grand Patrons:" << std::endl;
    int countGrandPatrons = 0;

    for (int i = 0; i < size; i++) {
        if (maecenases[i].donation >= 10000) {
            std::cout << "Name: " << maecenases[i].name << " donation: " << maecenases[i].donation << std::endl;
            ++countGrandPatrons;
        }
    }
    if (!countGrandPatrons) {
        std::cout << "none" << std::endl;
    }
}
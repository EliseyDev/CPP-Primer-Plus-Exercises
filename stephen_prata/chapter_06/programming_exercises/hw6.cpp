#include <iostream>
#include <string>

struct maecenas {
    std::string name{};
    double donation{};
};

void printGrandPatrons(maecenas *maecenases, size_t size);

void printPatrons(maecenas *maecenases, size_t size);

int main() {
    size_t sizeOfMaecenases;

    std::cout << "Enter number of maecenases: ";

    std::cin >> sizeOfMaecenases;

    auto *maecenases = new maecenas[sizeOfMaecenases];
    std::string name;

    for (int i = 0; i < sizeOfMaecenases; i++) {
        std::cout << "Maesenas #" << i + 1 << ":\n" << "Name: ";
        std::cin.get();
        std::getline(std::cin, maecenases[i].name);

        std::cout << "Donation: ";
        std::cin >> maecenases[i].donation;
    }

    printGrandPatrons(maecenases, sizeOfMaecenases);
    printPatrons(maecenases, sizeOfMaecenases);

    delete[] maecenases;

    return 0;
}

void printPatrons(maecenas *maecenases, size_t size) {
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

void printGrandPatrons(maecenas *maecenases, size_t size) {
    std::cout << "Grand Patrons: " << std::endl;
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
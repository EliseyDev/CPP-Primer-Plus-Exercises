#include <iostream>
#include <string>

struct car {
    std::string manufacturer;
    int year{};
};

int main() {
    int arraySize = 0;
    car *carCollection;

    std::cout << "Enter how many cars should be added to collection: ";
    std::cin >> arraySize;

    carCollection = new car[arraySize];

    for (int i = 0; i < arraySize; i++) {
        std::cout << "Car #" << i + 1 << ":" << std::endl;
        std::cout << "Enter manufacturer: ";
        std::cin >> carCollection[i].manufacturer;

        std::cout << "Enter year of production: ";
        std::cin >> carCollection[i].year;
    }

    std::cout << "Your collection consists of: " << std::endl;

    for (int i = 0; i < arraySize; i++) {
        std::cout << carCollection[i].year << " " << carCollection[i].manufacturer << std::endl;
    }

    return 0;
}
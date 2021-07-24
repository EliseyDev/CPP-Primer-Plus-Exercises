#include <iostream>
#include <string>

struct Pizza {
    std::string manufacturer;
    int diameter;
    float weight;
};

int main() {
    std::string manufacturer;
    int diameter;
    float weight;

    std::cout << "Enter name of the pizza manufacturer: ";
    getline(std::cin, manufacturer);

    std::cout << "Enter pizza diameter: ";
    std::cin >> diameter;

    std::cout << "Enter pizza weight: ";
    std::cin >> weight;

    Pizza pizza{
            manufacturer, diameter, weight
    };

    std::cout << "Information about current pizza:" << std::endl;
    std::cout << "Manufacturer: " << pizza.manufacturer << ", diameter: " << pizza.diameter << ", weight: "
              << pizza.weight << std::endl;

    return 0;
}
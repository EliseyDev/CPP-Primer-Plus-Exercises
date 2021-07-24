#include <iostream>

int main() {
    std::string name;
    std::string dessert;

    std::cout << "Enter your name:\n";
    getline(std::cin, name);

    std::cout << "Enter your favorite dessert:\n";
    getline(std::cin, dessert);

    std::cout << "I have some delicious " << dessert << " for you, " << name << std::endl;

    return 0;
}
#include <iostream>

int furlongToYard(int);

int main() {
    int furlong;
    std::cout << " Enter value of furlongs ";
    std::cin >> furlong;
    std::cout << furlong << " furlong are equal to " << furlongToYard(furlong) << " yards." << std::endl;

    return 0;
}

int furlongToYard(int furlong) {
    return furlong * 220;
}
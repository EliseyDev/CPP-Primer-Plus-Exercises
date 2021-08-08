// secref.cpp -- defining and using a reference

#include <iostream>

int main() {
    int rats = 101;
    int &rodents = rats;

    std::cout << "rats = " << rats << ", rodents = " << rodents << std::endl;
    std::cout << "rats address = " << &rats << ", rodents address = " << &rodents << std::endl;

    int bunnies = 50;
    rodents = bunnies;

    std::cout << "bunnies = " << bunnies << ", rats = " << rats << ", rodents = " << rodents << std::endl;
    std::cout << "bunnies address = " << &bunnies << ", rodents address = " << &rodents << std::endl;

    return 0;
}
#include <iostream>

void firstPrint();

void secondPrint();

int main() {
    firstPrint();
    firstPrint();

    secondPrint();
    secondPrint();

    return 0;
}

void firstPrint() {
    std::cout << "Three blind mice" << std::endl;
}

void secondPrint() {
    std::cout << "See how they run" << std::endl;
}
// textin1.cpp -- reading chars with a while loop

#include <iostream>

int main() {
    char ch;
    int count = 0;
    std::cout << "Enter characters; enter # to quit:\n";
    std::cin >> ch;

    while (ch != '#') {
        std::cout << ch;
        ++count;

        std::cin >> ch;
    }

    std::cout << std::endl << count << " characters read\n";

    return 0;
}
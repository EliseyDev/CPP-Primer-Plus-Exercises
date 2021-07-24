// textin3.cpp -- reading chars to end of file

#include <iostream>

int main() {
    char ch;
    int count = 0;

    while (std::cin.get(ch)) {
        std::cout << ch;
        ++count;
    }

    std::cout << std::endl << count << " characters read\n";

    return 0;
}
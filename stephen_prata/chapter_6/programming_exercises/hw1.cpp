#include <iostream>
#include <cctype>

int main() {
    char ch;

    std::cin >> ch;

    while ('@' != ch) {
        unsigned char letter;

        if (std::islower(ch)) {
            letter = std::toupper(ch);
        } else if (std::isupper(ch)) {
            letter = std::tolower(ch);
        } else {
            std::cin >> ch;
            continue;
        }

        std::cout << letter;
        std::cin >> ch;
    }

    return 0;
}
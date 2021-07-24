#include <iostream>

const char DOT = '.';
const char STAR = '*';

int main() {
    int lines;

    std::cin >> lines;

    for (int i = 0; i < lines; i++) {
        for (int j = lines; j > 0; j--) {
            if (j > i + 1) {
                std::cout << DOT;
            } else {
                std::cout << STAR;
            }
        }
        std::cout << std::endl;
    }

    return 0;
}
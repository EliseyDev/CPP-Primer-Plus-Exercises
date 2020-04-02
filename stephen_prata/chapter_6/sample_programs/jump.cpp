#include <iostream>

const int ARR_SIZE = 80;

int main() {
    char line[ARR_SIZE];
    int spaces = 0;

    std::cout << "Enter a line of text: " << std::endl;
    std::cin.get(line, ARR_SIZE);

    std::cout << "Complete line: " << std::endl << line << std::endl;
    std::cout << "Line through first period:" << std::endl;

    for (int i = 0; line[i] != '\0'; i++) {
        std::cout << line[i];
        if (line[i] == '.') {
            break;
        }
        if (line[i] != ' ') {
            continue;
        }
        spaces++;
    }

    std::cout << "\n" << spaces << " spaces\nDone.";

    return 0;
}
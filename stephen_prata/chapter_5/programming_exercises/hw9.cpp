#include <iostream>
#include <string>

const char *STOP_WORD = "done";

int main() {
    std::string word;
    int counter = 0;

    std::cout << "Enter words (for exit type word 'done')" << std::endl;

    do {
        std::cin >> word;
        counter++;
    } while (STOP_WORD != word);

    std::cout << "Your entered " << --counter << " words." << std::endl;

    return 0;
}
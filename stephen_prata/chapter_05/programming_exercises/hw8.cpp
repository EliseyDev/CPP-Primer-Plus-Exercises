#include <iostream>
#include <cstring>

int main() {
    char *word = new char;
    const char *stopWord = "done";
    int counter = 0;
    int compare;

    std::cout << "Enter words (for exit type word 'done')" << std::endl;

    do {
        std::cin >> word;
        ++counter;
        compare = strcmp(word, stopWord);
        delete word;
    } while (compare != 0);

    std::cout << "Your entered " << --counter << " words." << std::endl;

    return 0;
}
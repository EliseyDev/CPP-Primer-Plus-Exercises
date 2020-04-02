#include <iostream>

const int FAVE = 27;

int main() {
    int n;

    std::cout << "Enter a number in the range 1-100 to find my favorite number: ";

    do {
        std::cin >> n;
        if (n < FAVE) {
            std::cout << "Too low -- guess again: ";
        } else if (n > FAVE) {
            std::cout << "Too high -- guess again: ";
        } else {
            std::cout << FAVE << " is right!\n";
        }
    } while (n != FAVE);

    return 0;
}
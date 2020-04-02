#include <iostream>

const int MAX = 5;

int main() {
    int golf[MAX];

    std::cout << "Please enter your golf scores.\n"
                 "You must enter " << MAX << " rounds." << std::endl;
    int i;
    for (i = 0; i < MAX; i++) {
        std::cout << "round #" << i + 1 << ": ";
        while (!(std::cin >> golf[i])) {
            std::cin.clear();
            while (std::cin.get() != '\n') {
            }
            std::cout << "Please enter a number: ";
        }
    }

    double total = 0.0;

    for (i = 0; i < MAX; i++) {
        total += golf[i];
    }

    std::cout << total / MAX << " = average score " << MAX << " rounds" << std::endl;

    return 0;
}
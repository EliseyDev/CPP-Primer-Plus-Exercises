// cinfish.cpp -- non-numeric input terminates loop

#include "iostream"

const int MAX = 5;

int main() {
    double fish[MAX];

    std::cout << "Please enter the weights of your fish.\n"
                 "You may enter up to " << MAX << " fish <q to terminate>.\n"
                                                  "fish #1: ";

    int i = 0;
    while (i < MAX && std::cin >> fish[i]) {
        if (++i < MAX) {
            std::cout << "fish #" << i + 1 << ": ";
        }
    }

    double total = 0.0;
    for (int j = 0; j < i; j++) {
        total += fish[j];
    }

    if (i == 0) {
        std::cout << "No fish" << std::endl;
    } else {
        std::cout << total / i << " = average weight of " << i << " fish" << std::endl;
    }

    std::cout << "Done." << std::endl;

    return 0;
}
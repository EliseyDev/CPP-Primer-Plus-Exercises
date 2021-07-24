// lotto.cpp -- probability of winning

#include "iostream"

long double probability(unsigned numbers, unsigned picks);

int main() {
    double total, choices;

    std::cout << "Enter the total number of choices on the game card and the number of picks allowed:" << std::endl;

    while ((std::cin >> total >> choices) && choices <= total) {
        std::cout << "You have one chance in " << probability(total, choices) << " of winning." << std::endl;
        std::cout << "Next two numbers (q to quit): ";
    }

    std::cout << "Bye!" << std::endl;

    return 0;
}

long double probability(unsigned numbers, unsigned picks) {
    long double result = 1.0;
    long double n;
    unsigned p;

    for (n = numbers, p = picks; p > 0; n--, p--) {
        result = result * n / p;
    }
    return result;
}


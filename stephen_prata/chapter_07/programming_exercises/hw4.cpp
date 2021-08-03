#include "iostream"

long double probability(unsigned n_field, unsigned picks, unsigned mega_total, unsigned mega_n);

int main() {
    double n_field, choices, mega_total, mega_n;

    std::cout << "Enter the total number of choices, the number of picks, total mega number and picks :" << std::endl;

    while ((std::cin >> n_field >> choices >> mega_total >> mega_n) && choices <= n_field) {
        std::cout << "You have one chance in " << probability(n_field, choices, mega_total, mega_n) << " of winning."
                  << std::endl;
        std::cout << "Next four numbers (q to quit): ";
    }

    std::cout << "Bye!" << std::endl;

    return 0;
}

long double probability(unsigned numbers, unsigned picks, unsigned mega_total, unsigned mega_n) {
    long double result = 1.0;
    long double n;
    unsigned p;

    for (n = numbers, p = picks; p > 0; n--, p--) {
        result = result * n / p;
    }

    return result * ((double) mega_total / (double) mega_n);
}



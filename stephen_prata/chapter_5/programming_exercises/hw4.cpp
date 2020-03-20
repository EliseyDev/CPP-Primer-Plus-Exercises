#include <iostream>

const double FIVE_PERCENT = 0.05;
const double TEN_PERCENT = 0.1;

int main() {

    double dafnaBalance = 100;
    double cleoBalance = 100;

    int year = 1;

    do {
        dafnaBalance = dafnaBalance + (100 * TEN_PERCENT);
        cleoBalance = cleoBalance + (cleoBalance * FIVE_PERCENT);

        std::cout << "In " << year++ << " year(s)" << std::endl;
        std::cout << "Dafna balance is: " << dafnaBalance << std::endl;
        std::cout << "Cleo balance is: " << cleoBalance << std::endl << std::endl;

    } while (cleoBalance < dafnaBalance);

    return 0;
}
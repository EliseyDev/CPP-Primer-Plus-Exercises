#include <iostream>

const double ZERO_PERCENT_TAX_RATE = 0.0f;
const double TEN_PERCENT_TAX_RATE = 0.1f;
const double FIFTEEN_PERCENT_TAX_RATE = 0.15f;
const double TWENTY_PERCENT_TAX_RATE = 0.2f;

const int FIVE_THOUSAND_RANGE = 5000;
const int TEN_THOUSAND_RANGE = 10000;
const int TWENTY_THOUSAND_RANGE = 20000;

double calculateTax(double amount);

int main() {
    bool isAlive = true;
    double amount;

    while (isAlive) {
        std::cout << "Please enter the amount of money to calculate the tax that should be paid: ";
        std::cin >> amount;

        if (std::cin.good() && amount >= 0) {
            double totalTax = calculateTax(amount);
            std::cout << "For income of: " << amount << " you should pay: " << totalTax << std::endl;
        } else {
            std::cout << "You entered wrong arguments. Program will be terminated.";
            isAlive = false;
        }
    }

    return 0;
}

double calculateTax(double amount) {
    double totalTax = 0;

    if (amount >= FIVE_THOUSAND_RANGE) {
        totalTax += FIVE_THOUSAND_RANGE * ZERO_PERCENT_TAX_RATE;
        amount -= FIVE_THOUSAND_RANGE;
    } else {
        amount = 0;
    }

    if (amount >= TEN_THOUSAND_RANGE) {
        totalTax += TEN_THOUSAND_RANGE * TEN_PERCENT_TAX_RATE;
        amount -= TEN_THOUSAND_RANGE;
    } else {
        totalTax += amount * TEN_PERCENT_TAX_RATE;
        amount = 0;
    }

    if (amount >= TWENTY_THOUSAND_RANGE) {
        totalTax += TWENTY_THOUSAND_RANGE * FIFTEEN_PERCENT_TAX_RATE;
        amount -= TWENTY_THOUSAND_RANGE;
    } else {
        totalTax += amount * FIFTEEN_PERCENT_TAX_RATE;
        amount = 0;
    }

    totalTax += amount * TWENTY_PERCENT_TAX_RATE;

    return totalTax;
}


#include <iostream>

int convertYearsToMonths(int);

int main() {
    int age;
    std::cout << "Enter your age in years: ";
    std::cin >> age;
    std::cout << "Your age in months is " << convertYearsToMonths(age) << std::endl;

    return 0;
}

int convertYearsToMonths(int years) {
    return years * 12;
}
#include <iostream>

const int FOOT_PER_INCH = 12;

int main() {
    int heightInInches;
    std::cout << "Enter height in inches ___\b\b\b";
    std::cin >> heightInInches;

    std::cout << "Your height is: " << heightInInches / FOOT_PER_INCH << " foot(s) and " << heightInInches % FOOT_PER_INCH
              << " inch(s)\n";

    return 0;
}
#include <iostream>

int main() {
    int result = 0;
    int value = 0;

    std::cout << "Enter value to sum (0 to exit): ";
    std::cin >> value;

    while (value != 0) {
        std::cout << "Sum of entered numbers is: " << (result += value) << std::endl << "Enter new value to sum: ";
        std::cin >> value;
    }

    std::cout << "Entered value is 0. Total sum of entered numbers is: " << result << std::endl;

    return 0;
}
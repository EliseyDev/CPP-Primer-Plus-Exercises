#include <iostream>
#include <array>

int main() {
    std::array<float, 3> rush{};

    std::cout << "Enter result of the first run: ";
    std::cin >> rush[0];

    std::cout << "Enter result of the second run: ";
    std::cin >> rush[1];

    std::cout << "Enter result of the third run: ";
    std::cin >> rush[2];

    float average = (rush[0] + rush[1] + rush[2]) / rush.size();

    std::cout << "First run time result is      : " << rush[0] << std::endl;
    std::cout << "Second run time result is     : " << rush[1] << std::endl;
    std::cout << "Third run time result is      : " << rush[2] << std::endl;
    std::cout << "Average time of all 3 runs is : " << average << std::endl;
}
#include <iostream>
#include <array>
#include <string>

const int SEASONS = 4;
const std::array<std::string, SEASONS> S_NAMES =
        {"Spring", "Summer", "Fail", "Winter"};

void fill(std::array<double, SEASONS> *pa);

void show(std::array<double, SEASONS> da);

int main() {
    std::array<double, SEASONS> expenses{};
    fill(&expenses);
    show(expenses);

    return 0;
}

void fill(std::array<double, SEASONS> *pa) {
    for (int i = 0; i < SEASONS; i++) {
        std::cout << "Enter " << S_NAMES[i] << " expenses:";
        std::cin >> (*pa)[i];
    }
}

void show(std::array<double, SEASONS> da) {
    double total = 0.0;
    std::cout << "\nEXPENSES\n";
    for (int i = 0; i < SEASONS; i++) {
        std::cout << S_NAMES[i] << ": $" << da[i] << std::endl;
        total += (double) da[i];
    }
    std::cout << "Total expenses: $" << total << std::endl;
}


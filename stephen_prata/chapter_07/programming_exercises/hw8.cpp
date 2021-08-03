#include <iostream>

const int SEASONS = 4;
const char *seasons[SEASONS] = {"Spring", "Summer", "Fail", "Winter"};

struct spending {
    double costs[SEASONS];
};

void fill(double expenses[]);

void fill(spending *expenses);

void show(double expenses[]);

void show(spending *expenses);

int main() {
    double expenses[SEASONS];
    fill(expenses);
    show(expenses);

    struct spending spend = {};

    fill(&spend);
    show(&spend);
    return 0;
}

void fill(double expenses[]) {
    for (int i = 0; i < SEASONS; i++) {
        std::cout << "Enter " << seasons[i] << " expenses:";
        std::cin >> expenses[i];
    }
}

void fill(spending *expenses) {
    for (int i = 0; i < SEASONS; i++) {
        std::cout << "Enter " << seasons[i] << " expenses:";
        std::cin >> expenses->costs[i];
    }
}

void show(double expenses[]) {
    double total = 0.0;
    std::cout << "\nEXPENSES\n";
    for (int i = 0; i < SEASONS; i++) {
        std::cout << seasons[i] << ": $" << expenses[i] << std::endl;
        total += expenses[i];
    }
    std::cout << "Total expenses: $" << total << std::endl;
}

void show(spending *expenses) {
    double total = 0.0;
    std::cout << "\nEXPENSES\n";
    for (int i = 0; i < SEASONS; i++) {
        std::cout << seasons[i] << ": $" << expenses->costs[i] << std::endl;
        total += expenses->costs[i];
    }
    std::cout << "Total expenses: $" << total << std::endl;
}

#include <iostream>
#include <climits>

bool is_int(double);

int main() {
    double num;

    std::cout << "Yo, dude! Enter an integer value: ";
    std::cin >> num;

    while (!is_int(num)) {
        std::cout << "Out of range -- please try again: ";
        std::cin >> num;
    }

    return 0;
}

bool is_int(double value) {
    if (value <= INT_MAX && value >= INT_MIN) {
        return true;
    } else {
        return false;
    }
}
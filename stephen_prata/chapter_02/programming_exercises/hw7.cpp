#include <iostream>

void printTime(int, int);

int main() {
    int hour;
    int minutes;

    std::cout << "Enter the number of hours: ";
    std::cin >> hour;
    std::cout << "Enter the number of minutes: ";
    std::cin >> minutes;

    printTime(hour, minutes);

    return 0;
}

void printTime(int hour, int minutes) {
    std::cout << "Time: " << hour << ":" << minutes << std::endl;
}
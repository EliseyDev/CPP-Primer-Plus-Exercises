#include <iostream>

double convertCelsiusToFahrenheit(double);

void printTemperature(double);

int main() {
    double celsius;
    std::cout << "Please enter a Celsius value: ";
    std::cin >> celsius;
    printTemperature(celsius);

    return 0;
}

double convertCelsiusToFahrenheit(double celsius) {
    return celsius * 1.8 + 32;
}

void printTemperature(double celsius) {
    std::cout << celsius
              << " degrees Celsius is "
              << convertCelsiusToFahrenheit(celsius)
              << " degrees Fahrenheit."
              << std::endl;
}
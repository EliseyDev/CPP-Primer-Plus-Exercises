#include <iostream>

double convertLYtoAU(double);

int main() {
    double lightYears;
    std::cout << "Enter the number of light years: ";
    std::cin >> lightYears;
    std::cout << lightYears << " light years = " << convertLYtoAU(lightYears) << " astronomical units." << std::endl;

    return 0;
}

double convertLYtoAU(double lightYears) {
    return lightYears * 63240;
}
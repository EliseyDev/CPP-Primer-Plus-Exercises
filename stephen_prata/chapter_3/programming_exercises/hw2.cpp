#include <iostream>
#include <cmath>

const int INCH_PER_FOOT = 12;
const float METER_PER_INCH = 0.0254f;
const float KG_PER_POND = 2.2f;

int main() {
    float foot, inch, pound;
    std::cout << "Enter your height and weight:\n";
    std::cout << "Height in foots: ";
    std::cin >> foot;

    std::cout << "Height in inches: ";
    std::cin >> inch;

    std::cout << "Weight in pounds: ";
    std::cin >> pound;

    inch += foot * INCH_PER_FOOT;
    float meters = inch * METER_PER_INCH;

    float kg = pound / KG_PER_POND;

    float BMI = kg / pow(meters, 2);

    std::cout << "height in inches = " << inch << std::endl;
    std::cout << "height in meters = " << meters << std::endl;
    std::cout << "weight in kg = " << kg << std::endl;

    std::cout << "BMI = " << BMI << std::endl;

    return 0;
}
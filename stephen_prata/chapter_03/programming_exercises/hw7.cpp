#include <iostream>

const float MILE_PER_100_KM = 62.14f;
const float GALLON_PER_LITER = 3.875f;

int main() {
    using namespace std;

    float consumptionEU, gallon, miles;

    cout << "Enter value of fuel consumption in Europe liters per 100km\n";
    cout << "Enter value of fuel consumption: ";
    cin >> consumptionEU;

    gallon = consumptionEU / GALLON_PER_LITER;
    miles = MILE_PER_100_KM / gallon;

    cout << miles << " miles over gallon\n";

    return 0;
}
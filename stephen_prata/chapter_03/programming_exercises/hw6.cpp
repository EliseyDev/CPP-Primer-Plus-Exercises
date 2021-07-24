#include <iostream>

const int COEFFICIENT_PER_100 = 100;

int main() {
    using namespace std;
    float liters, distance;

    cout << "Enter traveled distance and liters of spent fuel\n";
    cout << "First, enter the distance: ";
    cin >> distance;
    cout << "Finally, enter liters: ";
    cin >> liters;

    float resultConsumption = liters / (distance / COEFFICIENT_PER_100);

    cout << "consumption per 100 km = " << resultConsumption << " liters of fuel";

    return 0;
}
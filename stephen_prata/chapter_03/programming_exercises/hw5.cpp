#include <iostream>

int main() {
    using namespace std;

    long long worldPopulation;
    long long USPopulation;

    cout << "Enter the world's population: ";
    cin >> worldPopulation;
    cout << "Enter the population of the US: ";
    cin >> USPopulation;

    cout << "The population of the US is " << (float) USPopulation * 100 / (float) worldPopulation << endl;

    return 0;
}
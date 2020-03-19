#include <iostream>

const int CITIES_SIZE = 5;
const int YEARS_SIZE = 4;

int main() {
    using namespace std;

    const char *cities[CITIES_SIZE] = {
            "Gribble City",
            "Gribbletown",
            "New Gribble",
            "Sun Gribble",
            "Gribble Vista"};

    int maxTemps[YEARS_SIZE][CITIES_SIZE] = {
            {96, 100, 87, 101, 105},
            {96, 98,  91, 107, 104},
            {97, 101, 93, 108, 107},
            {98, 103, 95, 109, 108}
    };

    std::cout << "Maximum temperatures for 2008-2011\n\n";

    for (int city = 0; city < CITIES_SIZE; city++) {
        std::cout << cities[city] << ":\t";
        for (int year = 0; year < YEARS_SIZE; year++) {
            std::cout << maxTemps[year][city] << "\t";
        }
        std::cout << std::endl;
    }

    return 0;
}
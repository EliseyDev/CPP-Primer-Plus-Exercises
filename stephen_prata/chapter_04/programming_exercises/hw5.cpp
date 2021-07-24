#include <iostream>
#include <string>

struct CandyBar {
    std::string name;
    float weight;
    int calories;
};

int main() {
    CandyBar snack{
            "Mocha Munch",
            2.3f,
            350
    };

    std::cout << "Name: " << snack.name << ", weight: " << snack.weight << ", calories: " << snack.calories
              << std::endl;

    return 0;
}
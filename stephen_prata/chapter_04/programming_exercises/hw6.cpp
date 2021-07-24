#include <iostream>
#include <string>

struct CandyBar {
    std::string name;
    float weight{};
    int calories{};
};

int main() {
    CandyBar candyBars[3];

    candyBars[0] = {"Snickers", 118.5f, 420};
    candyBars[1] = {"Mars", 103.8f, 360};
    candyBars[2] = {"Milky way", 70, 180};

    for (int i = 0; i < 3; i++) {
        std::cout << "Name: " << candyBars[i].name << ", weight: " << candyBars[i].weight << ", calories: "
                  << candyBars[i].calories << std::endl;
    }

    return 0;
}
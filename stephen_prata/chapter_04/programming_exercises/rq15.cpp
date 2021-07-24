#include <iostream>
#include <string>

struct fish {
    std::string kind;
    int weight;
    float length;
};

int main() {
    fish *ptr = new fish{
            "Ocelot",
            3290,
            8.3
    };

    std::cout << "Kind of the fish: " << ptr->kind << std::endl;

    return 0;
}
#include <iostream>
#include <string>

struct fish {
    std::string kind;
    int weight;
    float length;
};

int main() {

    fish *shark = new fish{
            "shark",
            489,
            287
    };

    std::cout << "Kind of the fish: " << shark->kind << ", weight: " << shark->weight << ", length: " << shark->length
              << std::endl;
    delete shark;

    return 0;
}
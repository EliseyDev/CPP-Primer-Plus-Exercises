#include <iostream>
#include <array>

const int ARRAY_SIZE = 101;

int main() {

    std::array<long double, ARRAY_SIZE> factorials{};

    factorials[0] = factorials[1] = 1;

    for (int i = 2; i < ARRAY_SIZE; i++) {
        factorials[i] = factorials[i - 1] * i;
    }

    for (int j = 0; j < ARRAY_SIZE; j++) {
        std::cout << j << "! = " << factorials[j] << std::endl;
    }

    return 0;
}
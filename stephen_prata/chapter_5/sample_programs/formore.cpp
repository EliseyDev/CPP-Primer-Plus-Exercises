#include <iostream>

const int ARR_SIZE = 16;

int main() {
    long long factorials[ARR_SIZE];
    factorials[1] = factorials[0] = 1LL;

    for (int i = 2; i < ARR_SIZE; i++) {
        factorials[i] = i * factorials[i - 1];
    }

    for (int i = 0; i < ARR_SIZE; i++) {
        std::cout << i << "! = " << factorials[i] << std::endl;
    }

    return 0;
}
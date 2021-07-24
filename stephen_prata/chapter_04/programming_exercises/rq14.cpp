#include <iostream>

int main() {
    // will print address of the first element of current byte array
    std::cout << (int *) "Home of the jolly bytes";

    return 0;
}
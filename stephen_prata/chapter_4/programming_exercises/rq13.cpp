#include <iostream>
#include <vector>

int main() {
    std::cout << "Enter size of dynamic array\n";
    int size = std::cin.get();

    int *array = new int[size];

    std::vector<int> vectorArray(size);

    return 0;
}
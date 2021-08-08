// funtemp.cpp -- using a function template

#include <iostream>

template<typename T>
void swap(T &a, T &b);

int main() {
    int i = 10;
    int j = 20;
    std::cout << "i, j = " << i << ", " << j << std::endl;
    std::cout << "Using compiler-generated int swapper:\n";
    swap(i, j);
    std::cout << "Now i, j = " << i << ", " << j << std::endl;

    double x = 24.5;
    double y = 81.7;
    std::cout << "x, y = " << x << ", " << y << std::endl;
    std::cout << "Using compiler-generated int swapper:\n";
    swap(x, y);
    std::cout << "Now x, y = " << x << ", " << y << std::endl;

    std::cin.get();

    return 0;
}

template<typename T>
void swap(T &a, T &b) {
    T temp;
    temp = a;
    a = b;
    b = temp;
}
#include <iostream>

long double factorial(int n);

int main() {
    std::cout << factorial(6) << std::endl;

    return 0;
}


long double factorial(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
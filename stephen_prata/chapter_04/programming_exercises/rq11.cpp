#include <iostream>

int main() {

    double ted = 21.76;

    double *ptr = &ted;

    std::cout << *ptr << std::endl;

    return 0;
}
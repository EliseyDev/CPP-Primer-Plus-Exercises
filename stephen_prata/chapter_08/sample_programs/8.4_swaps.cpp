// swaps.cpp -- swapping with references and with pointers

#include <iostream>

void swapr(int &a, int &b);

void swapp(int *p, int *q);

void swapv(int a, int b);

int main() {
    int wallet1 = 300;
    int wallet2 = 350;
    std::cout << "wallet1 = $" << wallet1 << " wallet2 = $" << wallet2 << std::endl;

    std::cout << "Using references to swap contents: " << std::endl;
    swapr(wallet1, wallet2);
    std::cout << "wallet1 = $" << wallet1 << " wallet2 = $" << wallet2 << std::endl;

    std::cout << "Using pointers to swap contents again: " << std::endl;
    swapp(&wallet1, &wallet2);
    std::cout << "wallet1 = $" << wallet1 << " wallet2 = $" << wallet2 << std::endl;

    std::cout << "Trying to use passing by value: " << std::endl;
    swapv(wallet1, wallet2);
    std::cout << "wallet1 = $" << wallet1 << " wallet2 = $" << wallet2 << std::endl;

    return 0;
}

void swapr(int &a, int &b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swapp(int *p, int *q) {
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}

void swapv(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}
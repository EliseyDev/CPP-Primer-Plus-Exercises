#include "iostream"

void simple();

int main() {
    std::cout << "main() will call the simple() function:\n";
    simple();
    std::cout << "main() is finished with the simple() function.\n";

    return 0;
}

void simple() {
    std::cout << "I'm but a simple function.\n";
}
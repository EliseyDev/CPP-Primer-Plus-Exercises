#include <iostream>
#include <fstream>

int main() {
    std::fstream file;
    file.open("test.txt");
    int count = 0;

    if (!file.is_open()) {
        exit(1);
    }
    char ch;

    while (file.get() != EOF) {
        ++count;
        std::cout << "Count: " << count << std::endl;
    }

    std::cout << "Count: " << count << std::endl;

    return 0;
}
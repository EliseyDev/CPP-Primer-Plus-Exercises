#include <iostream>

int main() {
    int ch;
    int count = 0;

    while ((ch = std::cin.get()) != EOF) {
        std::cout.put(ch);
        ++count;
    }

    std::cout << std::endl << count << " characters read\n";
    
    return 0;
}
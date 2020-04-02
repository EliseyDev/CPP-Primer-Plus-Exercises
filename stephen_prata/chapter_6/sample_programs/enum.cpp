#include <iostream>

enum {
    red, orange, yellow, green, blue, violet, indigo
};

int main() {
    std::cout << "Enter color code (0-6):";

    int code;
    std::cin >> code;

    while (code >= red && code <= indigo) {
        switch (code) {
            case red:
                std::cout << "Red." << std::endl;
                break;
            case orange:
                std::cout << "Orange." << std::endl;
                break;
            case yellow:
                std::cout << "Yellow." << std::endl;
                break;
            case green:
                std::cout << "Green." << std::endl;
                break;
            case blue:
                std::cout << "Blue." << std::endl;
                break;
            case violet:
                std::cout << "Violet." << std::endl;
                break;
            case indigo:
                std::cout << "Indigo." << std::endl;
                break;
            default:
                std::cout << "Wrong argument" << std::endl;
        }
        std::cout << "Enter color code (0-6): ";
        std::cin >> code;
    }

    std::cout << "Bye" << std::endl;

    return 0;
}
#include <iostream>

void showMenu();

int main() {
    char ch;
    bool isWrongValueEntered = true;

    showMenu();

    do {
        std::cin >> ch;
        switch (ch) {
            case 'c':
                std::cout << "Carnivore is a meat-eater animal" << std::endl;
                isWrongValueEntered = false;
                break;
            case 't':
                std::cout << "A maple is a tree" << std::endl;
                isWrongValueEntered = false;
                break;
            case 'p':
                std::cout << "Pianist play on piano" << std::endl;
                isWrongValueEntered = false;
                break;
            case 'g':
                std::cout << "Playing game is funny" << std::endl;
                isWrongValueEntered = false;
                break;
            default:
                std::cout << "Please enter -> c, t, p, or g: " << std::endl;
                break;
        }
    } while (isWrongValueEntered);

    return 0;
}

void showMenu() {
    std::cout << "Please enter one of the following choices:\n"
                 "c) carnivore        p) pianist\n"
                 "t) tree             g) game\n";
}
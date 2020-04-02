#include <iostream>

void showMenu();

void report();

void comfort();

int main() {
    showMenu();

    int choice;
    std::cin >> choice;

    while (choice != 5) {
        switch (choice) {
            case 1:
                std::cout << "\a\n";
                break;
            case 2:
                report();
                break;
            case 3:
                std::cout << "The boss was in all day.\n";
                break;
            case 4:
                comfort();
                break;
            default:
                std::cout << "That is not a choice.\n";
        }

        showMenu();

        std::cin >> choice;
    }

    std::cout << "Bye!\n";

    return 0;
}

void showMenu() {
    std::cout << "Please enter 1, 2, 3, 4 or 5:\n"
                 "1) alarm          2) report\n"
                 "3) alibi          4) comfort\n"
                 "5) quit\n";
}

void report() {
    std::cout << "It's been an excellent week for business.\n"
                 "Sales are up 120%. Expenses are down 35%.\n";
}

void comfort() {
    std::cout << "Your employees think you are the finest CEO\n"
                 "in the industry. The board of directors think\n"
                 "you are the finest CEO in the industry.\n";
}
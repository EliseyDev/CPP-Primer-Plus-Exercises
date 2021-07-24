#include <iostream>

const int STRING_SIZE = 40;
const int ARRAY_SIZE = 4;

struct bop {
    char fullname[STRING_SIZE];
    char title[STRING_SIZE];
    char bopname[STRING_SIZE];
    int preference;
};

enum choice {
    FULLNAME, TITLE, BOP
};

void showMenu();

void displayByPreference(bop *values);

void displayByField(bop *values, char choice);

bop *fillEntities();

int main() {
    char ch;

    bop *entities = fillEntities();

    showMenu();

    std::cout << "Enter your choice: ";
    std::cin.get(ch);

    while ('q' != ch) {
        if ('d' == ch) {
            displayByPreference(entities);
        } else {
            displayByField(entities, ch);
        }


        std::cout << "Next choice: ";
        std::cin.get(ch);
    }

    delete[] entities;

    std::cout << "Bye!" << std::endl;

    return 0;
}

void displayByPreference(bop *values) {
    for (int i = 0; i < ARRAY_SIZE; i++) {
        int preference = values[i].preference;

        switch (preference) {
            case FULLNAME:
                std::cout << values[i].fullname << std::endl;
                break;
            case TITLE:
                std::cout << values[i].title << std::endl;
                break;
            case BOP:
                std::cout << values[i].bopname << std::endl;
                break;
            default:
                continue;
        }
    }
}

void displayByField(bop *values, char choice) {
    for (int i = 0; i < ARRAY_SIZE; i++) {
        switch (choice) {
            case 'a':
                std::cout << values[i].fullname << std::endl;
                break;
            case 'b':
                std::cout << values[i].title << std::endl;
                break;
            case 'c':
                std::cout << values[i].bopname << std::endl;
                break;
            default:
                continue;
        }
    }
}

void showMenu() {
    std::cout << "Benevolent Order of Programmers Report\n"
                 "a. display by name      b. display by title\n"
                 "c. display by bopname   d. display by preference\n"
                 "q. quit\n";
}

bop *fillEntities() {
    return new bop[4]{
            {"Elisey Novikov",
                    "Middle Java Developer",
                    "Antonim",
                    2
            },
            {"Alexei Ivanko",
                    "Expert System Analyst",
                    "Alex",
                    1
            },
            {"Alexandr Sorokin",
                    "Senior Java Developer",
                    "4okin",
                    0
            },
            {"Eugen Lysenkov",
                    "System Analyst",
                    "Eugen",
                    2
            }
    };
}
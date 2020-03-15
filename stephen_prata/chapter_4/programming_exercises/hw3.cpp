#include <iostream>
#include <cstring>

int main() {
    const int ARRAY_SIZE = 20;
    const int END_SYMBOL_SIZE = 1;
    const int COMMA_AND_SPACE_SYMBOL_SIZE = 2;
    const char COMMA_SPACE_ARRAY[] = ", ";

    char name[ARRAY_SIZE];
    char surname[ARRAY_SIZE];

    std::cout << "Enter your first name: ";
    std::cin.getline(name, 20);

    std::cout << "Enter your last name: ";
    std::cin.getline(surname, ARRAY_SIZE);

    int count_first_array = 0;
    int count_second_array = 0;

    for (char i : name) {
        if (i != '\0') {
            ++count_first_array;
            continue;
        }
        break;
    }

    for (char i : surname) {
        if (i != '\0') {
            ++count_second_array;
            continue;
        }
        break;
    }

    char *ptr = new char[count_first_array + count_second_array + END_SYMBOL_SIZE + COMMA_AND_SPACE_SYMBOL_SIZE];

    // Copy array with surname
    strncpy(ptr, surname, count_second_array);
    // Copy array with comma and space
    strncpy(ptr + count_second_array, COMMA_SPACE_ARRAY, 2);
    // Copy array with name
    strcpy(ptr + count_second_array + COMMA_AND_SPACE_SYMBOL_SIZE, name);

    std::cout << "Here's the information in a single string: " << ptr << std::endl;

    delete[] ptr;

    return 0;
}
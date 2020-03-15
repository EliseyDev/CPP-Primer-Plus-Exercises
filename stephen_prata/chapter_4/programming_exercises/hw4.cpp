#include <iostream>
#include <string>

int main() {
    std::string name;
    std::string surname;
    std::string result;

    std::cout << "Enter your name: ";
    std::cin >> name;

    std::cout << "Enter your surname: ";
    std::cin >> surname;

    result = surname.append(", ").append(name);

    std::cout << "Here's the information in a single string: " << result << std::endl;

    return 0;
}
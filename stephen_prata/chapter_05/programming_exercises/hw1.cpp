#include <iostream>

int main() {
    int firstNumber, secondNumber, result = 0;


    std::cout << "Enter two numbers to find sum of all numbers between them:" << std::endl
              << "Enter the first number: ";
    std::cin >> firstNumber;

    std::cout << "Enter the second number: ";
    std::cin >> secondNumber;

    for (int i = firstNumber; i <= secondNumber; i++) {
        result += i;
    }

    std::cout << "Sum of all numbers between first and second numbers is: " << result << std::endl;

    return 0;
}
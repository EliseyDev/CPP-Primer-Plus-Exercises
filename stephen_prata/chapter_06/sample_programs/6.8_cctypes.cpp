// cctypes.cpp -- using the ctype.h library

#include <iostream>
#include <cctype>

int main() {

    std::cout << "Enter text for analysis, and type @ to terminate input." << std::endl;

    char ch;
    int whitespace = 0;
    int digits = 0;
    int chars = 0;
    int punct = 0;
    int others = 0;

    std::cin.get(ch);

    while (ch != '@') {
        if (isalpha(ch)) {
            chars++;
        } else if (isspace(ch)) {
            whitespace++;
        } else if (isdigit(ch)) {
            digits++;
        } else if (ispunct(ch)) {
            punct++;
        } else {
            others++;
        }

        std::cin.get(ch);
    }

    std::cout << chars << " letters, " << whitespace << " whitespaces, " << digits << " digits, " << punct
              << " punctuations, " << others << " others.\n";

    return 0;
}
#include <iostream>
#include <cctype>

bool isVowel(const char &ch);

void
printResult(const int &vowelWordBeginCount, const int &consonantWordBeginCount, const int &otherCharBeginCount);

int main() {
    int vowelWordBeginCount = 0;
    int consonantWordBeginCount = 0;
    int otherCharBeginCount = 0;

    std::string word;

    std::cout << "Enter words (q to quit) :" << std::endl;

    while (std::cin >> word && word != "q") {
        char firstCharacter = word[0];

        if (isalpha(firstCharacter)) {
            isVowel(firstCharacter) ? ++vowelWordBeginCount : ++consonantWordBeginCount;
        } else {
            ++otherCharBeginCount;
        }
    }

    printResult(vowelWordBeginCount, consonantWordBeginCount, otherCharBeginCount);

    return 0;
}

bool isVowel(const char &ch) {
    switch (ch) {
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
        case 'Y':
        case 'y':
            return true;
        default:
            return false;
    }
}

void
printResult(const int &vowelWordBeginCount, const int &consonantWordBeginCount, const int &otherCharBeginCount) {
    std::cout << vowelWordBeginCount << " words beginning with vowels" << std::endl;
    std::cout << consonantWordBeginCount << " words beginning with consonants" << std::endl;
    std::cout << otherCharBeginCount << " others" << std::endl;
}

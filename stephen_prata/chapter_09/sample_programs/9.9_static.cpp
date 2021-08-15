#include <iostream>

const int ARR_SIZE = 10;

void strcount(const char *str);

int main() {
    using namespace std;
    char input[ARR_SIZE];
    char next;
    cout << "Enter a line: \n";
    cin.get(input, ARR_SIZE);

    while (cin) {
        cin.get(next);

        while (next != '\n') {
            cin.get(next);
        }

        strcount(input);
        cout << "Enter next line (empty line to quit):\n";
        cin.get(input, ARR_SIZE);
    }

    cout << "Bye\n";

    return 0;
}

void strcount(const char *str) {
    using namespace std;
    static int total = 0;
    int count = 0;
    cout << "\"" << str << "\" contains ";

    while (*str++) {
        count++;
    }

    total += count;

    cout << count << " characters\n";
    cout << total << " characters total\n";
}

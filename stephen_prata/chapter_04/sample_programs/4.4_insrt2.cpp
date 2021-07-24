// instr2.cpp -- reading more than one word with getline

#include <iostream>

int main() {
    using namespace std;

    const int ARR_SIZE = 20;
    char name[ARR_SIZE];
    char dessert[ARR_SIZE];

    cout << "Enter your name:\n";
    cin.getline(name, ARR_SIZE);
    cout << "Enter your favorite dessert:\n";
    cin.getline(dessert, ARR_SIZE);
    cout << "I have some delicious " << dessert << " for you, " << name << ".\n";

    return 0;
}
#include <iostream>

int main() {
    using namespace std;

    const int ARR_SIZE = 20;
    char name[ARR_SIZE];
    char dessert[ARR_SIZE];

    cout << "Enter your name:\n";
    cin.get(name, ARR_SIZE).get();
    cout << "Enter your favorite dessert:\n";
    cin.get(dessert, ARR_SIZE).get();
    cout << "I have some delicious " << dessert << " for you, " << name << ".\n";

    return 0;
}
#include <iostream>

int main() {
    using namespace std;

    const int ARR_SIZE = 20;
    char name[ARR_SIZE];
    char dessert[ARR_SIZE];

    cout << "Enter your name:\n";
    cin >> name;
    cout << "Enter your favorite dessert:\n";
    cin >> dessert;
    cout << "I have some delicious " << dessert << " for you, " << name << ".\n";

    return 0;
}
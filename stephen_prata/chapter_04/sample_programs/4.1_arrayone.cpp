// arrayone.cpp -- small arrays of integers

#include <iostream>

int main() {
    using namespace std;

    int yams[3];
    yams[0] = 7;
    yams[1] = 8;
    yams[2] = 6;

    int yamCosts[3] = {20, 30, 5};

    cout << "Total yams = ";
    cout << yams[0] + yams[1] + yams[2] << endl;
    cout << "The package with " << yams[1] << " yams costs " << yamCosts[1] << " cents per yam." << endl;

    int total = yams[0] * yamCosts[0] + yams[1] * yamCosts[1];
    total = total + yams[2] * yamCosts[2];
    cout << "The total yam expense is " << total << " cents." << endl;

    cout << "Size of yams array = " << sizeof yams << " bytes.\n";
    cout << "Size of element = " << sizeof yams[0] << " bytes.\n";

    short things[] = {1, 5, 3, 8};
    int numElements = sizeof things / sizeof(short);
    cout << numElements << endl;

    return 0;
}
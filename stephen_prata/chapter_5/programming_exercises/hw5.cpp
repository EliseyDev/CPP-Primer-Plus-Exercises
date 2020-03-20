#include <iostream>

const int MONTHS = 12;

int main() {
    const char *months[MONTHS] = {
            "January", "February", "March", "April", "May", "June", "July", "August", "September", "October",
            "November", "December"};
    int amountByMonths[MONTHS];
    int totalAmount = 0;

    for (int i = 0; i < MONTHS; i++) {
        std::cout << "Enter amount of books in " << months[i] << ": ";
        std::cin >> amountByMonths[i];

        totalAmount += amountByMonths[i];
    }

    std::cout << "Total amount of sold books for whole year is : " << totalAmount << std::endl;

    return 0;
}
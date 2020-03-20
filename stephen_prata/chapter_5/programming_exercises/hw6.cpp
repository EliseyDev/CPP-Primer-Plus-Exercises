#include <iostream>

const int MONTHS = 12;
const int YEARS = 3;

void printAmountOfBooksPerYear(int year, int &totalYearAmount);

int main() {
    const char *months[MONTHS] = {"January", "February", "March", "April", "May", "June", "July", "August", "September",
                                  "October", "November", "December"};
    int amountByYears[YEARS][MONTHS];
    int totalYearAmount = 0;
    int totalAmount = 0;

    for (int year = 0; year < YEARS; year++) {
        for (int month = 0; month < MONTHS; month++) {
            std::cout << "Enter amount of books in " << months[month] << ": ";
            std::cin >> amountByYears[year][month];

            totalYearAmount += amountByYears[year][month];
        }

        totalAmount += totalYearAmount;
        printAmountOfBooksPerYear(year, totalYearAmount);
    }

    std::cout << "Total amount of sold books for " << YEARS << " year(s) is: " << totalAmount << std::endl;

    return 0;
}

void printAmountOfBooksPerYear(int year, int &totalYearAmount) {
    std::cout << "Total amount of sold books for whole " << year + 1 << " year is : " << totalYearAmount << std::endl;
    totalYearAmount = 0;
}
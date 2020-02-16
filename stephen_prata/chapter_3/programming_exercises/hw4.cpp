#include <iostream>

const int SEC_IN_MIN = 60;
const int MIN_IN_HOUR = 60;
const int HOURS_IN_DAY = 24;

const int SEC_IN_DAY = 60 * 60 * 24;
const int SEC_IN_HOUR = 60 * 60;

int main() {
    using namespace std;
    long long seconds;

    cout << "Enter a number of seconds: ";
    cin >> seconds;

    long days = seconds / SEC_IN_MIN / MIN_IN_HOUR / HOURS_IN_DAY;
    seconds -= days * SEC_IN_DAY;

    long hours = seconds / SEC_IN_MIN / MIN_IN_HOUR;
    seconds -= hours * SEC_IN_HOUR;

    long minutes = seconds / SEC_IN_MIN;

    cout << seconds << " seconds = " << days << " days, " << hours << " hours, " << minutes << " minutes, "
         << seconds % SEC_IN_MIN << " seconds\n";

    return 0;
}
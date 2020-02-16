#include <iostream>

const int SECONDS_PER_DEGREE = 3600;
const int MINUTES_PER_DEGREE = 60;

int main() {
    using namespace std;

    float degrees, minutes, seconds;

    cout << "Enter a latitude in degrees, minutes and seconds:\n";
    cout << "First, enter the degrees: ";
    cin >> degrees;
    cout << "Next, enter the minutes of arc: ";
    cin >> minutes;
    cout << "Finally, enter the seconds of arc: ";
    cin >> seconds;

    float result = degrees + (minutes / MINUTES_PER_DEGREE) + (seconds / SECONDS_PER_DEGREE);
    cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = " << result << " degrees\n";

    return 0;
}
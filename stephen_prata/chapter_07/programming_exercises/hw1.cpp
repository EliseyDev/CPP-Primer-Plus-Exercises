#include <iostream>

using namespace std;

double harmonic_mean(double x, double y);

int main() {
    double x, y;

    while (cin >> x >> y && (x != 0 & y != 0)) {
        cout << "harmonic mean = " << harmonic_mean(x, y) << " for x = " << x << "; y = " << y << endl;
    }

    return 0;
}

double harmonic_mean(double x, double y) {
    return 2.0 * x * y / (x + y);
}
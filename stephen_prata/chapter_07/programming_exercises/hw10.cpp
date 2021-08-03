#include <iostream>
#include <cmath>

double calculate(const double &x, const double &y, double (*pf)(const double &x, const double &y));

double add(const double &x, const double &y);

double subtract(const double &x, const double &y);

double multiply(const double &x, const double &y);

double divide(const double &x, const double &y);

int main() {
    using namespace std;
    double x = 10;
    double y = 2;

    cout << "Calculating:\n";
    cout << "x = " << x << " + " << y << " = " << calculate(x, y, add) << endl;
    cout << "x = " << x << " - " << y << " = " << calculate(x, y, subtract) << endl;
    cout << "x = " << x << " * " << y << " = " << calculate(x, y, multiply) << endl;
    cout << "x = " << x << " / " << y << " = " << calculate(x, y, divide) << endl;

    return 0;
}

double calculate(const double &x, const double &y, double (*pf)(const double &x, const double &y)) {
    return pf(x, y);
}

double add(const double &x, const double &y) {
    return x + y;
}

double subtract(const double &x, const double &y) {
    return x - y;
}

double multiply(const double &x, const double &y) {
    return x * y;
}

double divide(const double &x, const double &y) {
    if (y == 0) return NAN;
    return x / y;
}
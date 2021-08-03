#include "iostream"

const int MAX = 5;

double *fill_array(double *array, const double *last_element);

void show_array(const double *array, const double *last_element);

void revalue(double r, double *array, const double *last_element);

int main() {
    double properties[MAX];

    double *last_element = fill_array(properties, properties + MAX);
    show_array(properties, last_element);

    if (last_element) {
        std::cout << "Enter revaluation factor: ";
        double factor;

        while (!(std::cin >> factor)) {
            std::cin.clear();
            char temp;
            do {
                std::cin.get(temp);
            } while (temp != '\n');

            std::cout << "Bad input; Please enter a number: ";
        }
        revalue(factor, properties, last_element);
        show_array(properties, last_element);
    }

    std::cout << "Done." << std::endl;
    std::cin.get();

    return 0;
}

double *fill_array(double *array, const double *last_element) {
    double temp;
    int i = 1;

    while (array < last_element) {
        std::cout << "Enter value #" << i << ": ";
        std::cin >> temp;

        if (!std::cin) {
            std::cin.clear();
            while (std::cin.get() != '\n') {}
            std::cout << "Bad input; input process terminated." << std::endl;
            break;
        } else if (temp < 0) {
            break;
        } else {
            *array = temp;
            ++array;
            ++i;
        }
    }

    return array;
}

void show_array(const double *array, const double *last_element) {
    int i = 1;
    while (array < last_element) {
        std::cout << "Property #" << i << ": $" << *array << std::endl;
        ++i;
        ++array;
    }
}

void revalue(double r, double *array, const double *last_element) {
    while (array < last_element) {
        *array *= r;
        ++array;
    }
}

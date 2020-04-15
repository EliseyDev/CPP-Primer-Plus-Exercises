#include <iostream>

const int ARRAY_SIZE = 10;

int main() {

    double donations[ARRAY_SIZE];
    int i;
    double average = 0;
    int higher_than_average_counter = 0;

    for (i = 0; i < ARRAY_SIZE; i++) {
        double current_value;

        std::cout << "Enter amount of donation #" << i + 1 << ": ";
        std::cin >> current_value;

        if (!std::cin.good()) {
            break;
        }

        donations[i] = current_value;
        average += current_value;
    }

    if (average > 0) {
        average /= i;

        for (double fund : donations) {
            if (fund > average) {
                ++higher_than_average_counter;
            }
        }
    }

    std::cout << "Average value in an array: " << average << std::endl;
    std::cout << "Number of items higher than average: " << higher_than_average_counter << std::endl;

    return 0;
}
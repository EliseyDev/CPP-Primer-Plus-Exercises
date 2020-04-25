#include <iostream>
#include <cmath>

struct polar {
    double distance;
    double angle;
};

struct rect {
    double x;
    double y;
};

void rect_to_polar(const rect *pxy, polar *pda);

void show_polar(const polar *pda);

int main() {
    rect rplace{};
    polar pplace{};
    std::cout << "Enter the x and y values: ";
    while (std::cin >> rplace.x >> rplace.y) {
        rect_to_polar(&rplace, &pplace);
        show_polar(&pplace);

        std::cout << "Next two numbers (q to quit): ";
    }

    std::cout << "Done" << std::endl;

    return 0;
}

void show_polar(const polar *pda) {
    const double RAD_TO_DEG = 57.29577951;
    std::cout << "distance = " << pda->distance << ", angle = "
              << pda->angle * RAD_TO_DEG << " degrees" << std::endl;
}

void rect_to_polar(const rect *pxy, polar *pda) {
    pda->distance = sqrt(pxy->x * pxy->x + pxy->y * pxy->y);
    pda->angle = atan2(pxy->y, pxy->x);
}
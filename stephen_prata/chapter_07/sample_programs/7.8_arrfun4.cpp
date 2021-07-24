// arrfun4.cpp -- functions with an array range

#include "iostream"

const int ARR_SIZE = 8;

int sum_arr(const int *begin, const int *end);

int main() {
    static int cookies[] = {1, 2, 4, 8, 16, 32, 64, 128};

    int sum = sum_arr(cookies, cookies + ARR_SIZE);
    std::cout << "Total cookies eaten: " << sum << std::endl;
    sum = sum_arr(cookies, cookies + 3);
    std::cout << "First three eaters ate " << sum << " cookies." << std::endl;
    sum = sum_arr(cookies + 4, cookies + 8);
    std::cout << "Last four eaters ate " << sum << " cookies." << std::endl;

    return 0;
}

int sum_arr(const int *begin, const int *end) {
    const int *pt;
    int total = 0;

    for (pt = begin; pt != end; pt++) {
        total = total + *pt;
    }
    return total;
}
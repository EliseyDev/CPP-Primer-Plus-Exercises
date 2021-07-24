// arrfun2.cpp -- functions with an array argument

#include "iostream"

const int ARR_SIZE = 8;

int sum_arr(int arr[], int n);

int main() {
    static int cookies[ARR_SIZE] = {1, 2, 4, 8, 16, 32, 64, 128};

    std::cout << cookies << " = array address, " << sizeof cookies << " = sizeof cookies" << std::endl;

    int sum = sum_arr(cookies, ARR_SIZE);
    std::cout << "Total cookies eaten: " << sum << std::endl;

    sum = sum_arr(cookies, 3);
    std::cout << "First three eaters ate " << sum << " cookies." << std::endl;

    sum = sum_arr(cookies + 4, 4);
    std::cout << "Last four eaters ate " << sum << " cookies." << std::endl;

    return 0;
}

int sum_arr(int arr[], int n) {
    int total = 0;

    std::cout << arr << " = arr, " << sizeof arr << " sizeof arr" << std::endl;

    for (int i = 0; i < n; i++) {
        total += arr[i];
    }
    return total;
}
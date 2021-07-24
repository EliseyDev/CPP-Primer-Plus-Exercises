// arrfun1.cpp -- functions with an array argument

#include "iostream"

const int ARR_SIZE = 8;

int sum_arr(int arr[], int n);

int main() {
    static int cookies[ARR_SIZE] = {1, 2, 4, 8, 16, 32, 64, 128};

    int sum = sum_arr(cookies, ARR_SIZE);

    std::cout << "Total cookies eaten: " << sum << std::endl;

    return 0;
}

int sum_arr(int arr[], int n) {
    int total = 0;

    for (int i = 0; i < n; i++) {
        total += +arr[i];
    }
    return total;
}
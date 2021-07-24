#include <iostream>

int main() {
    float treacle[10] = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f, 6.6f, 7.7f, 8.8f, 9.9f, 10.11f};
    float *ptr = treacle;

    std::cout << "treacle[0] " << ptr[0] << " treacle[9] " << *(ptr + 9) << std::endl;

    return 0;
}
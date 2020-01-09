#include <iostream>

int main() {
    using namespace std;
    string x = "hello";
    string y = "hello";

    cout << (x == y) << endl;
    cout << &x << " " << &y << endl;

    char x_arr[10] = "hello";
    char y_arr[10] = "hello";

    cout << (x_arr == y_arr) << endl;

    return 0;
}
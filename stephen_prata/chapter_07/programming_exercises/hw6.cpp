#include <iostream>

#define ARRAY_SIZE 6

int fill_array(double array[], int n);

void show_array(double array[], int n);

void reverse_array(double array[], int n);

int main() {
    double array[ARRAY_SIZE];

    fill_array(array, ARRAY_SIZE);
    reverse_array(array, ARRAY_SIZE);
    show_array(array, ARRAY_SIZE);

    return 0;
}

int fill_array(double array[], int n) {
    using namespace std;
    int i = 0;

    do {
        cout << "Enter value for array[" << i << "]: ";
        if (cin >> array[i]) {
            i++;
        } else {
            cin.clear();
            cin.ignore();
            break;
        }
    } while (i < n);

    return i;
}

void show_array(double array[], int n) {
    using namespace std;

    for (int i = 0; i < n; i++) {
        cout << "array[" << i << "] = " << array[i] << endl;
    }
}

void reverse_array(double array[], int n) {
    int middle = n / 2;
    double temp;

    for (int i = 0; i < middle; i++) {
        temp = array[i];
        array[i] = array[n - i - 1];
        array[n - i - 1] = temp;
    }
}
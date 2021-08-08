// twoswap.cpp -- specialization overrides a template

#include <iostream>

template<typename T>
void swap(T &, T &);

struct job {
    char name[40];
    double salary;
    int floor;
};

template<>
void swap<job>(job &, job &);

void show(job &j);

int main() {
    std::cout.precision(2);
    std::cout.setf(std::ios::fixed, std::ios::floatfield);
    int i = 10, j = 20;

    std::cout << "i, j = " << i << ", " << j << std::endl;
    std::cout << "Using compiler-generated int swapper:\n";
    swap(i, j);
    std::cout << "Now i, j = " << i << ", " << j << std::endl;

    job sue = {
            "Susan Yaffee",
            73000.60,
            7
    };

    job sidney = {
            "Sidney Taffee",
            78060.72,
            9
    };

    std::cout << "Before job swapping:\n";
    show(sue);
    show(sidney);
    swap(sue, sidney);
    std::cout << "After job swapping:\n";
    show(sue);
    show(sidney);

    return 0;
}

template<class T>
void swap(T &a, T &b) {
    T temp;
    temp = a;
    a = b;
    b = temp;
}

template<>
void swap<job>(job &j1, job &j2) {
    double t1;
    int t2;

    t1 = j1.salary;
    j1.salary = j2.salary;
    j2.salary = t1;

    t2 = j1.floor;
    j1.floor = j2.floor;
    j2.floor = t2;
}

void show(job &j) {
    using namespace std;
    cout << j.name << ": $" << j.salary << " on floor " << j.floor << endl;
}
// arfupt.cpp -- an array of function pointers

#include <iostream>

const double *f1(const double ar[], int n);

const double *f2(const double[], int);

const double *f3(const double *, int);

int main() {

    double av[3] = {1112.3, 1542.6, 2227.9};

    const double *(*p1)(const double *, int) = f1;
    auto p2 = f2;

    std::cout << "Using pointers to functions:" << std::endl << "Address Value" << std::endl;
    std::cout << (*p1)(av, 3) << ": " << *(*p1)(av, 3) << std::endl;
    std::cout << p2(av, 3) << ": " << *p2(av, 3) << std::endl;

    const double *(*pa[3])(const double *, int) = {f1, f2, f3};
    auto pb = pa;
    // Using array of pointers
    std::cout << "\nUsing an array of pointers to functions:\n Address Value" << std::endl;

    for (int i = 0; i < 3; i++) {
        std::cout << pa[i](av, 3) << ": " << *pa[i](av, 3) << std::endl;
    }

    // Using pointer to a pointer to a function
    std::cout << "\nUsing a pointer to a pointer of a function:\n Address Value" << std::endl;

    for (int i = 0; i < 3; i++) {
        std::cout << pb[i](av, 3) << ": " << *pb[i](av, 3) << std::endl;
    }

    // Using pointers to an array of pointers
    std::cout << "\nUsing pointers to an array of pointers:\n Address Value" << std::endl;

    // Simple way
    auto pc = &pa;
    std::cout << (*pc)[0](av, 3) << ": " << *(*pc)[0](av, 3) << std::endl;

    // Hard way declaring pd
    const double *(*(*pd)[3])(const double *, int) = &pa;
    // Saving returned value to pdb
    const double *pdb = (*pd)[1](av, 3);
    std::cout << pdb << ": " << *pdb << std::endl;

    // Alternative notation
    std::cout << (*(*pd)[2])(av, 3) << ": " << *(*(*pd)[2])(av, 3) << std::endl;

    return 0;
}

const double *f1(const double *ar, int n) {
    return ar;
}

const double *f2(const double ar[], int n) {
    return ar + 1;
}

const double *f3(const double ar[], int n) {
    return ar + 2;
}
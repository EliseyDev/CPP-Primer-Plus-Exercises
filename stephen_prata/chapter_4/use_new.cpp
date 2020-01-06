#include <iostream>

int main() {
    using namespace std;

    int nights = 1001;
    int *pt = new int;
    *pt = 1001;

    cout << "nights value = " << nights << ": location " << &nights << endl;
    cout << "int value = " << *pt << ": location = " << pt << endl;

    double *pd = new double;
    *pd = 10000001.0;
    cout << "double value = " << *pd << ": location = " << pd << endl;
    cout << "location of pointer pd: " << &pd << endl;

    cout << "Size of pt = " << sizeof(pt) << ": size of *pt = " << sizeof(*pt) << endl;
    cout << "Size of pd = " << sizeof(pd) << ": size of *pd = " << sizeof(*pd) << endl;

    int test = 99;
    int *ptest = &test;
    cout << test << endl;
    *ptest = 88;
    cout << test << endl;


    return 0;
}
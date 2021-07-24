// limits.cpp -- some integer limits

#include <iostream>
#include <climits>

int main() {
    using namespace std;

    int n_int = INT_MAX;
    short int s_int;
    short n_short = SCHAR_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LONG_LONG_MAX;

    cout << "int is " << sizeof(int) << " bytes." << endl;
    cout << "short int is " << sizeof s_int << " bytes." << endl;
    cout << "short is " << sizeof n_short << " bytes." << endl;
    cout << "long is " << sizeof n_long << " bytes." << endl;
    cout << "long long is " << sizeof n_llong << " bytes." << endl << endl;

    cout << "Maximum values:" << endl;
    cout << "int: " << n_int << endl;
    cout << "short int: " << s_int << endl;
    cout << "short: " << n_short << endl;
    cout << "long: " << n_long << endl;
    cout << "long long: " << n_llong << endl;

    cout << "Minimum int value = " << INT_MIN << endl;
    cout << "Bits per bite = " << CHAR_BIT << endl;

    return 0;
}
#include <iostream>
#include <limits.h>

int main() {
    using namespace std;
    char ch = 'M';
    int i = ch;
    cout << "The ASCII code for " << ch << " is " << i << endl;

    cout << "Add one to the character code:" << endl;
    ch = ch + 1;
    i = ch;
    cout << "The ASCII code for " << ch << " is " << i << endl;

    cout << "Displaying char ch using count.put(ch): ";
    cout.put(ch).put('!') << endl << "Done" << endl;

    return 0;
}
#include <iostream>
#include <cstring>

int main() {
    using namespace std;

    const int SIZE = 15;
    char f_name[SIZE];
    char s_name[SIZE] = "C++owboy";

    cout << "Howdy! I'm " << s_name;
    cout << "! What's your name?\n";
    cin >> f_name;
    cout << "Well, " << f_name << ", your name has ";
    cout << strlen(f_name) << " letters and is stored\n";
    cout << "in an array of " << sizeof f_name << " bytes.\n";
    cout << "Your initial is " << f_name[0] << ".\n";
    s_name[3] = '\0';
    cout << "Here are the first 3 characters of my name: " << s_name << endl;

    return 0;
}
#include <iostream>
#include <cstring>

using namespace std;

const int SLEN = 30;
struct student {
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};

int getinfo(student pa[], int n);

void display1(student st);

void display2(const student *ps);

void display3(const student pa[], int n);

int main() {
    cout << "Enter class size: ";
    int class_size;
    cin >> class_size;
    while (cin.get() != '\n');

    auto *ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);

    for (int i = 0; i < entered; i++) {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }

    display3(ptr_stu, entered);
    delete[] ptr_stu;
    cout << "Done\n";

    return 0;
}

int getinfo(student pa[], int n) {
    int i;

    for (i = 0; i < n; i++) {
        cout << "student[" << i + 1 << "] fullname = ";

        cin.getline(pa[i].fullname, SLEN);

        if (strlen(pa[i].fullname) == 0) {
            return i;
        }

        cout << "student[" << i + 1 << "] hobby = ";
        cin.getline(pa[i].hobby, SLEN);
        cout << "student[" << i + 1 << "] oop level = ";
        cin >> pa[i].ooplevel;

        while (cin.get() != '\n');
    }
}

void display1(student st) {
    cout << "Student by value:" << endl;
    cout << "Fullname: " << st.fullname << "\nHobby: " << st.hobby << "\nOOP level: " << st.ooplevel << endl;
}

void display2(const student *ps) {
    cout << "Student by pointer: " << endl;
    cout << "Fullname: " << ps->fullname << "\nHobby: " << ps->hobby << "\nOOP level: " << ps->ooplevel << endl;
}

void display3(const student pa[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Student by array: " << endl;
        cout << "Fullname: " << pa[i].fullname << "\nHobby: " << pa[i].hobby << "\nOOP level: " << pa[i].ooplevel
             << endl;
    }
}
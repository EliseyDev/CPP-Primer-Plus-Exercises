#include <iostream>

struct box {
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void print_struct_by_value(box object);

void set_volume(box &object);

int main() {

    box object = {
            "",
            8,
            12,
            16,
            0

    };

    std::cout << "Print box values:" << std::endl;
    print_struct_by_value(object);
    std::cout << "Set box volume..." << std::endl;
    set_volume(object);
    std::cout << "Print box values:" << std::endl;
    print_struct_by_value(object);

    return 0;
}

void print_struct_by_value(box object) {
    using namespace std;

    cout << "Height = " << object.height << "; Width = " << object.width << "; Length = " << object.length
         << "; Volume = " << object.volume << endl;

}

void set_volume(box &object) {
    object.volume = object.length * object.width * object.height;
}

#include <iostream>
#include <cmath>
#include "9.1_coordin.h"

polar rect_to_polar(rect xy_pos) {
    using namespace std;

    polar answer;
    answer.distance = sqrt(xy_pos.x * xy_pos.x + xy_pos.y * xy_pos.y);
    answer.angle = atan2(xy_pos.y, xy_pos.x);

    return answer;
}

void show_polar(polar da_pos) {
    using namespace std;

    const double RAD_TO_DEG = 57.29577951;
    cout << "distance = " << da_pos.distance;
    cout << ", angle = " << da_pos.angle * RAD_TO_DEG << " degrees\n";
}
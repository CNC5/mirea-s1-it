#include "../common.cpp"
#include <cmath>
#include <vector>

#define coordinates std::map<float, float>

coordinates generate_sin_coordinates(float len, float step, float scale) {
    coordinates coords;
    for (float x : range(0.0, len, step)) {
        float y = std::sin(x);
        coords[x] = y*scale;
    }
    return coords;
}

coordinates generate_sin_coordinates(float len, float step) {
    return generate_sin_coordinates(len, step, 10);
}

char graph_char(float pixel_y, float target_y) {
    // graph . if target y is lower than 0.2 in the pixel
    // graph ` if target y is higher than 0.8 in the pixel
    // graph + if target y is in the pixel center
    if ((pixel_y-0.2 > target_y) and (target_y > pixel_y-0.5)) {
        return '.';
    }
    if ((pixel_y+0.5 > target_y) and (target_y > pixel_y+0.2)) {
        return '`';
    }
    if ((pixel_y+0.5 > target_y) and (target_y > pixel_y-0.5)) {
        return '+';
    }
    return ' ';
}

void draw_dots(coordinates coords) {
    float
        max_x=0,
        min_x=1e200,
        max_y=0,
        min_y=1e200;
    for (auto e : coords) {
        max_x=std::max(max_x, e.first);
        max_y=std::max(max_y, e.second);
        min_x=std::min(min_x, e.first);
        min_y=std::min(min_y, e.second);
    }
    for (float y=max_y; y>min_y-1; y--) {
        for (float x : range(min_x, max_x, .1)) {
            std::cout<<graph_char(y, coords[x]);
        }
        std::cout<<std::endl;
    }
}

int main() {
    draw_dots(generate_sin_coordinates(10., .1));
    return 0;
}

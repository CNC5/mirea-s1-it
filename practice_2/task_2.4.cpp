#include <cmath>
#include "../common.cpp"

float y(float x) {
    return 
        (std::pow(x, 2) - 2*x + 2)/
                    (x-1);
}

int main() {
    float 
        range_start=-4,
        range_end=4,
        range_step=0.5;
    for (float x : range(range_start, range_end, range_step)) {
        print("Для x="+std::to_string(x)+" y="+std::to_string(y(x)));
    }
    return 0;
}
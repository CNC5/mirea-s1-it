#include <cmath>
#include "../common.cpp"

float s(float i) {
    float
        m=37,
        c=64;
    if (i==0) {
        return 0;
    }
    return div(m*s(i-1)+(i-1), c).rem;
}

int main() {
    float
        i=3;
    print(s(i));
    return 0;
}
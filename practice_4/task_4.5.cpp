#include <cmath>
#include "../common.cpp"

float sfunc(float s) {
    float
        m=37,
        i=3,
        c=64;
    if (s==0) {
        return 0;
    }
    return div(m*sfunc(s-1)+i, c).rem;
}

#define generate_pseudorandom_number sfunc

int main() {
    print(generate_pseudorandom_number(100));
    return 0;
}
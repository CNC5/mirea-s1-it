#include <cmath>
#include "../common.cpp"

float z(float x, float y, float b) {
    return log10(b-y) * sqrt(b-x);
}

int main() {
    float
        x=input_float("Введите x: "),
        y=input_float("Введите y: "),
        b=input_float("Введите b: ");
    print("z=" + std::to_string(z(x, y, b)));
    return 0;
}
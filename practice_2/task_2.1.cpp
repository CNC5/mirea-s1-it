#include <cmath>
#include "../common.cpp"

float w(float x, float a) {
    if (abs(x) < 1) {
        return a*log10(abs(x));
    }
    return sqrt(a-pow(x, 2));
}

int main() {
    float
        x=input_float("Введите x: "),
        a=input_float("Введите a: ");
    print(
        "Для x=" + std::to_string(x) + 
        " и a=" + std::to_string(a) + 
        " w=" + std::to_string(w(x, a)));
    return 0;
}
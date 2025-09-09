#include <cmath>
#include "../common.cpp"

float m(float S, float n, float p) {
    float r=p/100;
    return
        (S*r*std::pow((1 + r), n))/
        (12*(std::pow((1 + r), n) - 1));
}

int main() {
    float
        S=input_float("Введите S: "),
        p=input_float("Введите p: "),
        n=input_float("Введите n: ");
    print(std::to_string(m(S, n, p)));
    return 0;
}

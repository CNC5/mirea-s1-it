#include <cmath>
#include "../common.cpp"

float z(float x, float y, float b) {
    if (b-x < 0) {
        print("Ошибка: b-x < 0, невозможно вычислить корень")
        exit(1);
    }
    if (b-y <= 0) {
        print("Ошибка: b-y == 0, невозможно вычислить логарифм")
        exit(1);
    }
    return log(b-y) * sqrt(b-x);
}

int main() {
    float
        x=input_float("Введите x: "),
        y=input_float("Введите y: "),
        b=input_float("Введите b: ");
    print("z=" + std::to_string(z(x, y, b)));
    return 0;
}

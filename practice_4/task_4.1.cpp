#include <cmath>
#include "../common.cpp"

int sign(float num) {
    if (num==0) {
        return 0;
    }
    if (std::signbit(num)) {
        return -1;
    }
    return 1;

}
int main() {
    print(str(sign(input_float("Введите число: "))));
}

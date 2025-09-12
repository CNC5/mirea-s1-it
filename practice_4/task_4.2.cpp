#include <cmath>
#include "../common.cpp"

const float pi = 3.14;

float rectangle_surface(float a, float b) {
    return a*b;
}

float triangle_surface(float a, float h) {
    return 0.5*a*h;
}

float circle_surface(float r) {
    return 2*pi*std::pow(r, 2);
}

int main() {
    float
        a1=input_float("Введите сторону a прямоугольника: "),
        b=input_float("Введите сторону b прямоугольника: ");
    print("Площадь прямоугольника: "+str(rectangle_surface(a1, b)));
    float
        a2=input_float("Введите сторону a треугольника: "),
        h=input_float("Введите высоту h треугольника: ");
    print("Площадь треугольника: "+str(triangle_surface(a2, h)));
    float
        r=input_float("Введите радиус r: ");
    print("Площадь круга: "+str(circle_surface(r)));
}

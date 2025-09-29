// square - pi: 3.14
#include <iostream>
#include <cmath>

using namespace std;

const float pi = 3.14;

float cone_volume(float h, float R, float r) {
    return (pi*h*(R*R+R*r+r*r))/
            3;
}

float cone_surface(float R, float r, float l) {
    return pi*(R*R+(R+r)*l+r*r);
}

float cone_l(float h, float R, float r) {
    return sqrt((R - r) * (R - r) + h * h);
}

int main() {
    float h=0, R=0, r=0, l=0;
    cout << "Введите радиус большого основания" << endl;
    cin >> R;
    cout << "Введите радиус малого основания" << endl;
    cin >> r;
    cout << "Введите высоту усеченного конуса" << endl;
    cin >> h;
    if (R <= 0 or r <= 0 or h <= 0) {
        cout<<"Радиусы и высота должны быть положительными"<<endl;
        return 0;
    }
    if (r >= R) {
        cout<<"r должен быть меньше R"<<endl;
        return 0;
    }
    l=cone_l(h, R, r);
    cout<<
    "Объем: "<<cone_volume(h, R, r)<<
    ", полная площадь поверхности: "<<cone_surface(R, r, l)<<endl;
    return 0;
}

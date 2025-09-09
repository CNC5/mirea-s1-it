// square - pi: 3.14
#include <iostream>
#include <cmath>

using namespace std;

const float pi = 3.14;

float cone_volume(float h, float R, float r) {
    return (1/3)*pi*h*(pow(R, 2) + R*r + pow(r, 2));
}

float cone_surface(float R, float r, float l) {
    return pi*(pow(R, 2)+(R+r)*l+pow(r, 2));
}

int main() {
    cout<<"Введите параметры h, R, r и l: ";
    float h=0, R=0, r=0, l=0;
    cin>>h>>R>>r>>l;
    cout<<
    "Объем: "<<cone_volume(h, R, r)<<
    ", полная площадь поверхности: "<<cone_surface(R, r, l)<<endl;
    return 0;
}
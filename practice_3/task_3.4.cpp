#include "../common.cpp"
#include <cmath>

#define str std::to_string

int gcd_by_subtraction(int a, int b) {
    if (a>b) {
        return gcd_by_subtraction(a-b, b);
    }
    if (a<b) {
        return gcd_by_subtraction(a, b-a);
    }
    return a;
}

int gcd_by_division(int a, int b) {
    if (a>b) {
        return gcd_by_division(std::div(a, b).rem, b);
    }
    if (a<b) {
        return gcd_by_division(a, std::div(b, a).rem);
    }
    return a;
}

int main() {
    int
        a=48,
        b=18;
    print("НОД вычитанием: "+str(gcd_by_subtraction(a, b)));
    print("НОД делением: "+str(gcd_by_division(a, b)));
    return 0;
}
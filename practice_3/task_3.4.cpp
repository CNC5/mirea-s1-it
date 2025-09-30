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
    if (a==0) {
        return b;
    }
    if (b==0) {
        return a;
    }
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
        a=input_int("Введите число a: "),
        b=input_int("Введите число b: ");
    if (a<=0 or b<=0) {
        print("Оба числа должны быть положительными")
        return 1;
    }
    print("НОД вычитанием: "+str(gcd_by_subtraction(a, b)));
    print("НОД делением: "+str(gcd_by_division(a, b)));
    return 0;
}

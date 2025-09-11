#include <cmath>
#include "../common.cpp"
#include <iostream>

#define str std::to_string

// Newton method iteration
float f(
    float m, 
    float S, 
    float n, 
    float r) {
    return (
        (S*r*std::pow((1+r), n))/
        (12*(std::pow((1+r), n)-1))
    ) - m;
}

float f_derivative(
        float m, 
        float S, 
        float n, 
        float r) {
            float result=
            (S*(std::pow((r+1), (2*n+1)) + std::pow((r+1), n)*((-n-1)*r -1)))/
            (12*(std::pow((r+1), (2*n+1)) - 2*std::pow((r+1), (n+1)) + r + 1 ));
            return result;
        }

float newton_method_next_r(
        float m, 
        float S, 
        float n, 
        float r) {
    float f_der=f_derivative(m, S, n, r),
    new_r=
        r-((f(m, S, n, r))/
        (f_der));
    return new_r;
}

float newton_solve_f_for_r(
    float m, 
    float S, 
    float n, 
    int iterations, 
    float initial_guess) {
        float r=initial_guess, new_r=0;
        for (float i : range(0, iterations)) {
            new_r=newton_method_next_r(m, S, n, r);
            if (r==new_r) {
                print("converged in "+str(i)+" iterations");
                break;
            }
            r=new_r;
        }
        return r;
}

float newton_solve_f_for_r(
    float m, 
    float S, 
    float n) {
        return newton_solve_f_for_r(m, S, n, 10, 0.1);
}

float p(
    float S, 
    float n,
    float m) {
    float r=newton_solve_f_for_r(m, S, n);
    return r*100;
}

int main() {
    float
        S=input_float("Введите S: "),
        m=input_float("Введите m: "),
        n=input_float("Введите n: ");
    print("");
    print("p="+str(p(S, n, m)));
    return 0;
}

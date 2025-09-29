#include <iostream>
#include <math.h>

using namespace std;

int main(){
    float a=0, b=0, c=0,
          x1=0, x2=0, d=0;
    cout<<"Введите числа a, b и c: ";
    cin>>a>>b>>c;
    if (a==0) {
        if (b!=0) {
            x1=-c/b;
            cout<<"x = "<<x1<<endl;
            return 0;
        }
        cout<<"Решений нет"<<endl;
    }
    d=b*b-4*a*c;
    if (d > 0) {
        x1=((-b)+sqrt(d))/(2*a);
        x2=((-b)-sqrt(d))/(2*a);
        cout<<"x1 = "<<x1<<endl;
        cout<<"x2 = "<<x2<<endl;
        return 0;
    }
    if (d==0) {
        x1=-(b/(2*a));
        cout<<"x = "<<x1<<endl;
        return 0;
    }
    if (d<0) {
        cout<<"D < 0, Действительных корней уравнения не существует"<<endl;
        return 0;
    }
    return 0;
}

#include <iostream>
#include <math.h>

using namespace std;

int main(){
    float a=0, b=0, c=0;
    cout<<"Введите числа a, b и c: ";
    cin>>a>>b>>c;
    float d=pow(b,2)-4*a*c;
    if (d==0) {
        float x=(-b)/(2*a);
        cout<<"Одно решение x = "<<x<<endl;
        return 0;
    }
    if (d>0) {
        float x1=(-b+sqrt(d))/(2*a);
        float x2=(-b-sqrt(d))/(2*a);
        cout<<"Два решения x1 = "<<x1<<"; x2 = "<<x2<<endl;
        return 0;
    }
    cout<<"Нет решений по условию"<<endl;
    return 0;
}

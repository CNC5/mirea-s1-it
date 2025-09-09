#include <iostream>
using namespace std;

int main(){
    float a=0, b=0;
    cout<<"Введите числа a и b: ";
    cin>>a>>b;
    float sum=a+b, diff=a-b, prod=a*b;
    if (b<1) {
        cout<<
            "Сумма: "<<sum<<
            ", разность: "<<diff<<
            ", произведение: "<<prod<<
            ", частное не вычисляемо по условию"<<endl;
        return 0;
    }
    float quot=a/b;
    cout<<
        "Сумма: "<<sum<<
        ", разность: "<<diff<<
        ", произведение: "<<prod<<
        ", частное: "<<quot<<endl;
    return 0;
}

#include <iostream>
using namespace std;

int main(){
    float b=0, c=0;
    cout<<"Введите числа b и c: ";
    cin>>b>>c;
    if (b == 0) {
        if (c == 0) {
            cout << "Уравнение имеет бесконечно много решений." << endl;
        }
        else {
            cout << "Уравнение не имеет решений." << endl;
        }
        return 0;
    }
    float solution=-c/b;
    cout<<"x: "<<solution<<endl;
    return 0;
}

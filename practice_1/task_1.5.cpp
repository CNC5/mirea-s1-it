#include <iostream>
#include <math.h>
#include <chrono>
#include <ctime>

using namespace std;

int current_hour() {
    std::chrono::time_point t_now = std::chrono::system_clock::now();
    time_t t_t_now = std::chrono::system_clock::to_time_t(t_now);
    std::tm* local_tm = std::localtime(&t_t_now);
    return local_tm->tm_hour;
}

bool is_daytime_now() {
    return 6<current_hour() and current_hour()<18;
}

int main(){
    bool shades_open=0,lamp=0;
    cout<<"Лампа включена[1/0]? ";
    cin>>lamp;
    cout<<"Шторы открыты[1/0]? ";
    cin>>shades_open;
    if (lamp or (shades_open and is_daytime_now())) {
        cout<<"В комнате светло"<<endl;
        return 0;
    }
    cout<<"В комнате темно"<<endl;
    return 0;
}

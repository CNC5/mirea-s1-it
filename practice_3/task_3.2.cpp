#include <iostream>
#include <fstream>
#include "../common.cpp"

int main() {
    char buff[1];
    std::ifstream fin("alphanum.txt");
    while (fin.good()) {
        fin.read(buff, 1);
        if (std::isdigit(buff[0])) {
            std::cout<<buff;
        }
    }
    fin.close();
    return 0;
}
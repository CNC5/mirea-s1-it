#include <iostream>
#include <fstream>
#include <string>
#include "../common.cpp"

int main() {
    std::ofstream fout("task_3.1.txt");
    fout<<"Работа с файлами в C++"<<std::endl;
    fout.close();

    std::ifstream fin("task_3.1.txt");
    std::string result;
    while (getline(fin, result)) {
        std::cout<<result;
    }
    fin.close();
    return 0;
}
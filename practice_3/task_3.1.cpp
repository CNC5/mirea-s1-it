#include <iostream>
#include <fstream>

int main() {
    const int buffer_size=200;
    std::ofstream fout("task_3.1.txt");
    fout<<"Работа с файлами в C++"<<std::endl;
    fout.close();

    char buff[buffer_size];
    std::ifstream fin("task_3.1.txt");
    fin.read(buff, buffer_size);
    fin.close();
    std::cout<<buff<<std::endl;
    return 0;
}
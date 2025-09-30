#include <iostream>
#include <fstream>
#include "../common.cpp"

int main() {
    std::ofstream fout("alphanum.txt");
    fout<<"5dkrqwd0335u9rb9w1nsmxm4"<<
          "tx2xrz2g3422455a2nyltkck"<<
          "jfp0cvypqqbo82hjzj0a67x1"<<
          "1zi8j7yugkrf1jengw3og11tks4u"<<std::endl;
    fout.close();

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

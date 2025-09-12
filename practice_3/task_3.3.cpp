#include <iostream>
#include <fstream>
#include <algorithm>
#include "../common.cpp"

int main() {
    std::string result;
    std::ifstream fin("alpha.txt");
    while (fin>>result) {}
    fin.close();
    std::sort(result.begin(), result.end());
    print(result);
    return 0;
}
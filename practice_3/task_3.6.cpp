#include <iostream>
#include <fstream>
#include "../common.cpp"
#include <vector>

int main() {
    std::vector<int> numbers=range(1, 10);
    std::ofstream fout("task_3.6.txt");
    for (int i : numbers) {
        fout<<str(i)<<" ";
    }
    fout.close();

    std::string result;
    std::ifstream fin("task_3.6.txt");
    int sum=0;
    while (fin>>result) {
        sum += atoi(result.c_str());
    }
    fin.close();

    print(str(sum));
    return 0;
}
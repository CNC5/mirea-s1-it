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
    std::string num;
    char ch[1];
    while (fin.good()) {
        fin.read(ch, 1);
        if (ch[0] == ' ') {
            sum += atoi(num.c_str());
            num = "";
            continue;
        }
        num += ch;
    }
    fin.close();

    print(str(sum));
    return 0;
}
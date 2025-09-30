#include <iostream>
#include <fstream>
#include "../common.cpp"

std::map<char, int> char_ind={
    {'a', 0},
    {'b', 1},
    {'c', 2},
    {'d', 3},
    {'e', 4},
    {'f', 5},
    {'g', 6},
    {'h', 7},
    {'i', 8},
    {'j', 9},
    {'k', 10},
    {'l', 11},
    {'m', 12},
    {'n', 13},
    {'o', 14},
    {'p', 15},
    {'q', 16},
    {'r', 17},
    {'s', 18},
    {'t', 19},
    {'u', 20},
    {'v', 21},
    {'w', 22},
    {'x', 23},
    {'y', 24},
    {'z', 25}
};

void bubble_sort(
    std::string::iterator begin,
    std::string::iterator end) {
        int swaps;
        std::string::iterator it;
        do {
            swaps=0;
            for (it = begin; it < end-1; ++it) {
                char
                    char_a=*it,
                    char_b=*(it+1);
                if (char_ind[char_a]>char_ind[char_b]) {
                    *it=char_b;
                    *(it+1)=char_a;
                    swaps++;
                }
            }
        } while (swaps!=0);
}

int main() {
    std::ofstream fout("alpha.txt");
    fout<<"cdkglbnlvkyigkjwdppodzoiafxcnv"<<std::endl;
    fout.close();

    std::string result1, result2;
    std::ifstream fin("alpha.txt");
    while (fin>>result1) {}
    fin.close();
    result2 = result1;

    auto start = microseconds_now();
    std::sort(result1.begin(), result1.end());
    auto end = microseconds_now();
    auto time_1 = end - start;

    start = microseconds_now();
    bubble_sort(result2.begin(), result2.end());
    end = microseconds_now();
    auto time_2 = end - start;

    print(
        "Стандартная сортировка <algorithm>: "+result1+" за "+str(time_1.count())+" микросекунд\n"+
        "Самописная пузырьковая сортировка: "+result2+" за "+str(time_2.count())+" микросекунд"
    );
    return 0;
}

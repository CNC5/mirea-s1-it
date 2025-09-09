#include <vector>
#include "../common.cpp"

std::string range_string(int start, int end, std::string delim) {
    std::string out="";
    for (int i : range(start, end)) {
        out += std::to_string(i);
        if (i == end) {
            break;
        }
        out += delim;
    }
    return out;
}

int main() {
    int n=input_int("Введите N: ");
    std::cout<<range_string(n, n+9, ", ")<<std::endl;
    return 0;
}
#include <string>
#include <map>
#include "../common.cpp"

std::map<char, int> roman_chars={
    {'I', 1},
    {'V', 5},
    {'X', 10},
    {'L', 50},
    {'C', 100},
    {'D', 500},
    {'M', 1000}
};

int rome_decode(std::string input) {
    int 
        sum=0,
        value=0,
        next_value=0;
    for (int i : range(0, input.size()-1)) {
        value=roman_chars[std::toupper(input[i])];
        if (input.size()-1>i) {
            next_value=roman_chars[std::toupper(input[i+1])];
        } else {
            sum+=value;
            continue;
        }
        if (value<next_value) {
            sum-=value;
        } else {
            sum+=value;
        }
    }
    return sum;
}

int main() {
    print(rome_decode(input_string("Введите римское число: ")));
    return 0;
}
#include "../common.cpp"
#include <cmath>
#include <vector>
#include <map>

#define str std::to_string

std::vector<int> find_all_primes(int start, int end) {
    std::vector<int> prime_numbers={1};
    // 1 is prime but shouldn't be used in sieve multiplication
    std::map<int, bool> nonprime_numbers;
    for (int i : range(start, end)) {
        if (nonprime_numbers[i]) {
            continue;
        }
        for (int e : range(i, end, i)) {
            nonprime_numbers[e] = true;
        }
        prime_numbers.push_back(i);
    }
    return prime_numbers;
}

int main() {
    int
        s=2,
        e=input_int("Введите натуральное число: ");
    for (int p : find_all_primes(s, e)) {
        std::cout<<str(p)<<" ";
    }
    return 0;
}
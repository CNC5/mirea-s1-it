#include <iostream>
#include <string>
#include <regex>
#include <chrono>

#define str std::to_string

void print(std::string prompt) {
    std::cout<<prompt<<std::endl;
}

void print(auto prompt) {
    std::cout<<prompt<<std::endl;
}

std::string input_string(std::string prompt) {
    std::string raw_input;
    std::cout<<prompt;
    std::cin>>raw_input;
    return raw_input;
}

bool input_bool(std::string prompt) {
    BEGIN:;
    std::string raw_input;
    std::cout<<prompt;
    std::cin>>raw_input;
    std::regex true_regex("[Yy]|[Yy]es|[Дд]а*|[Tt]rue|[Ии]стина|1");
    std::regex false_regex("[Nn]o*|[Нн]|[Нн]ет|[Ff]alse|[Лл]ожь|0");
    if (std::regex_search(raw_input, true_regex)) {
        return true;
    }
    if (std::regex_search(raw_input, false_regex)) {
        return false;
    }
    std::cout<<"Input not recognized as bool, please try again"<<std::endl;
    goto BEGIN;
}

float input_float(std::string prompt) {
    float raw_input=0;
    std::cout<<prompt;
    std::cin>>raw_input;
    return raw_input;
}

int input_int(std::string prompt) {
    int raw_input=0;
    std::cout<<prompt;
    std::cin>>raw_input;
    return raw_input;
}

std::vector<float> range(float start, float end, float step) {
    std::vector<float> out_range;
    for (float i=start; i<end+step; i += step) {
        out_range.push_back(i);
    }
    return out_range;
}

std::vector<float> range(float start, float end) {
    return range(start, end, 1.);
}

std::vector<int> range(int start, int end, int step) {
    std::vector<int> out_range = {};
    for (float i=start; i<end+step; i += step) {
        out_range.push_back(i);
    }
    return out_range;
}

std::vector<int> range(int start, int end) {
    return range(start, end, 1);
}

std::chrono::milliseconds milliseconds_now() {
    return
    std::chrono::duration_cast<std::chrono::milliseconds>
    (std::chrono::system_clock::now().time_since_epoch());
}

std::chrono::microseconds microseconds_now() {
    return
    std::chrono::duration_cast<std::chrono::microseconds>
    (std::chrono::system_clock::now().time_since_epoch());
}

std::chrono::nanoseconds nanoseconds_now() {
    return
    std::chrono::duration_cast<std::chrono::nanoseconds>
    (std::chrono::system_clock::now().time_since_epoch());
}
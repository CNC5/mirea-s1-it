#include "../common.cpp"
#include <vector>

//std::vector<std::vector<std::string>> draw_flag(int stars, int stripes) {
void draw_flag(int stars, int stripes) {
    int
        width=50,
        height=13;
    //std::vector<std::vector<std::string>> canvas;
    for (int y : range(0, height-1)) {
        //canvas.push_back(std::vector<std::string> {{}});
        for (int x : range(0, width-1)) {
            char character;
            if (
                (0<=x and x<=9 and 0<=y and y<=3) or 
                (0<=x and x<=7 and 3<=y and y<=4)
            ) {
                character='*';
                std::cout<<character;
                continue;
            }
            if (7<=x and x<=9 and 3<=y and y<=4) {
                character=' ';
                std::cout<<character;
                continue;
            }
            character='=';
            std::cout<<character;
        }
        std::cout<<std::endl;
    }
}


int main() {
    draw_flag(48, 13);
    return 0;
}
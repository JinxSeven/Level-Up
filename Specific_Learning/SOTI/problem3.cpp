#include <iostream>

class Volume {
    private:
        int length, breadth, height;
    public:
        Volume(int l, int b, int h) {
            length = l;
            breadth = b;
            height = h;
        }

        void volume() {
           std::cout << "volume: " << length * breadth * height << std::endl; 
        }

        void perimeter() {
            std::cout << "perimeter: " << 4 * (length + breadth + height) << std::endl;
        }
};

int main(int argc, char* argv[]) {
    int len, brd, hgt;
    std::cin >> len >> brd >> hgt;
    Volume one(len, brd, hgt);
    one.perimeter();
    one.volume();
}
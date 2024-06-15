#include <iostream>

class Flooring {
    private:
        int length, breadth;
    public:
        Flooring(int length, int breadth) {
            this->length = length;
            this->breadth = breadth;
        }

        int rope() {
            return (2*length) + (2*breadth);
        }
        int carpet() {
            return length * breadth;
        }
};

int main(int argc, char** argv) {
    Flooring branStark(20, 90);
    int rope = branStark.rope();
    int carpet = branStark.carpet();
    std::cout << rope << std::endl << carpet << std::endl;
}
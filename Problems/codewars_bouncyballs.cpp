#include <iostream>
#include <cmath>

class Bouncingball
{
public:
    static int bouncingBall(double h, double bounce, double window);        
};

    int Bouncingball::bouncingBall(double h, double bounce, double window) {
        if (h <= 0 || bounce <= 0 || bounce >= 1 || window >= h) {
            return -1;
        }
        int count = 1;
        double bounceBack = bounce * h;

        while (bounceBack > window) {
            count += 2;
            bounceBack *= bounce;
        }
    return count;
    }

int main() {
    double h, bounce, window;
    std::cout << "Enter the initial height (h): ";
    std::cin >> h;
    std::cout << "Enter the bounce factor (bounce): ";
    std::cin >> bounce;
    std::cout << "Enter the window height (window): ";
    std::cin >> window;

    int result = Bouncingball::bouncingBall(h, bounce, window);
    std::cout << result << std::endl;
}
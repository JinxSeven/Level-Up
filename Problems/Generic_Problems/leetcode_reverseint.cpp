#include <iostream>
#include <string>
#include <typeinfo>

std::string rdata;
int j;
char plus = '+';
char minus = '-';

void reverse(int& data) {
    std::string sdata = std::to_string(data);
    std::cout << "Given integer is " << sdata << "\n";
        if (sdata[0] == minus) {
            rdata += sdata[0];
            for (j = (sdata.length() - 1); j > 0; j--) {
                rdata += sdata[j];
                }
            }
        else {
            for (j = (sdata.length() - 1); j >= 0; j--) {
                //std::cout << "else\n";
                rdata += sdata[j];
                }
    }
            std::cout << "Reversed integer is " << rdata << "\n";
            }

int main() {
    int input;
    std::cout << "Enter any signed integer: ";
    std::cin >> input;
    reverse(input);
}

#include <iostream>
#include <string>

int main() {
    int quaters = 25;
    int dimes = 10;
    int nickels = 5;
    int pennies = 1;

    int change;
    do {std::cout << "Change owed: ";
    std::cin >> change;} while ( change < 1 );

    int cal_quaters = change / quaters;
    change %= quaters;

    int cal_dimes = change / dimes;
    change %= dimes;

    int cal_nickels = change / nickels;
    change %= nickels;

    int cal_pennies = change / pennies;
    change %= pennies;

    int output = cal_quaters + cal_pennies + cal_nickels + cal_dimes;

    std::cout << output;
}

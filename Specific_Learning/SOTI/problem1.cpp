#include <bits/stdc++.h>
#include <iomanip>

int main() {
    int principal, rateOfInterest, timePeriod;
    std::cin >> principal >> rateOfInterest >> timePeriod;
    double interest, totalAmount, discount, finalPayment;
    interest = (principal * rateOfInterest * timePeriod) / 100;
    std::cout << std::fixed << std::setprecision(2) << interest << std::endl;
    totalAmount = interest + principal;
    std::cout << std::fixed << std::setprecision(2) << totalAmount << std::endl;
    discount = (interest / 100) * 2;
    std::cout << std::fixed << std::setprecision(2) << discount << std::endl;
    finalPayment = totalAmount - discount;
    std::cout << std::fixed << std::setprecision(2) << finalPayment << std::endl;
}
#include <iostream>
#include <iomanip>

int main()
{
    double price, gstPercentage;

    std::cout << "Enter product price: " << std::endl;
    std::cin >> price;

    std::cout << "Enter GST percentage: " << std::endl;
    std::cin >> gstPercentage;

    double gstAmount = price * gstPercentage / 100;
    double finalPrice = price + gstAmount;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "GST amount: " << gstAmount << std::endl;
    std::cout << "Final price: " << finalPrice << std::endl;

    return 0;
}
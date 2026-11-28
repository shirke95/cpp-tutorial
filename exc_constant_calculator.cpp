#include <iostream>
#include <iomanip>

int main()
{
    const double GST_RATE = 0.18;

    double productPrice;
    std::cout << "Enter the product price: ";
    std::cin >> productPrice;

    const double gstAmount = productPrice * GST_RATE;
    const double finalPrice = productPrice + gstAmount;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "GST: " << gstAmount << std::endl;
    std::cout << "Final price: " << finalPrice << std::endl;

    return 0;
}

#include <iostream>
#include <string>
#include <iomanip>

int main()
{
    std::string productName;
    double price;
    int quantity;

    std::cout << "Enter product name: ";
    std::getline(std::cin, productName);

    std::cout << "Enter price: ";
    std::cin >> price;

    std::cout << "Enter quantity: ";
    std::cin >> quantity;

    double totalAmount = price * quantity;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Product: " << productName << std::endl;
    std::cout << "Total amount: " << totalAmount << std::endl;

    return 0;
}

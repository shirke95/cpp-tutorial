#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    std::string productName;
    double price;
    int quantity;

    std::cout << "Enter product name: " << std::endl;
    std::getline(std::cin, productName);

    std::cout << "Enter price: " << std::endl;
    std::cin >> price;

    std::cout << "Enter quantity: " << std::endl;
    std::cin >> quantity;

    double subtotal = price * quantity;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Shopping Cart Bill" << std::endl;
    std::cout << "Product: " << productName << std::endl;
    std::cout << "Price: $" << price << std::endl;
    std::cout << "Quantity: " << quantity << std::endl;
    std::cout << "Subtotal: $" << subtotal << std::endl;

    return 0;
}

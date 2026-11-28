#include <iostream>
#include <string>

int main()
{
    std::string product_name = "Laptop";

    unsigned int stock_quantity = 50;
    unsigned int sold_quantity = 12;

    unsigned int remaining_stock = stock_quantity - sold_quantity;

    std::cout << "Product: " << product_name << std::endl;
    std::cout << "Total Stock: " << stock_quantity << std::endl;
    std::cout << "Sold: " << sold_quantity << std::endl;
    std::cout << "Remaining: " << remaining_stock << std::endl;

    return 0;
}
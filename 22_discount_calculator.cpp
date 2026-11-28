#include <iostream>
#include <iomanip>

int main()
{
    double product_price = 2500.00;
    int discount_percentage = 15;

    double discount_amount =
        product_price * discount_percentage / 100.0;

    double final_price = product_price - discount_amount;

    std::cout << std::fixed << std::setprecision(2);

    std::cout << "Product Price: Rs. " << product_price << std::endl;
    std::cout << "Discount: " << discount_percentage << "%" << std::endl;
    std::cout << "Discount Amount: Rs. " << discount_amount << std::endl;
    std::cout << "Final Price: Rs. " << final_price << std::endl;

    return 0;
}
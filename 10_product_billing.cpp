#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    std::string product_name = "Laptop";

    double price = 55000.00;
    double gst_percentage = 18.0;
    int quantity = 2;

    double subtotal = price * quantity;
    double gst_amount = subtotal * gst_percentage / 100;
    double total = subtotal + gst_amount;

    std::cout << std::fixed << std::setprecision(2);

    std::cout << "===== Product Bill =====" << std::endl;

    std::cout << "Product: " << product_name << std::endl;
    std::cout << "Price: Rs. " << price << std::endl;
    std::cout << "Quantity: " << quantity << std::endl;
    std::cout << "Subtotal: Rs. " << subtotal << std::endl;
    std::cout << "GST: Rs. " << gst_amount << std::endl;
    std::cout << "Total: Rs. " << total << std::endl;

    return 0;
}
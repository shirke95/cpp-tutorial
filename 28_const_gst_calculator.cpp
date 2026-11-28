#include <iostream>
#include <iomanip>

int main()
{
    const double GST_RATE = 18.0;

    double product_price = 1000.00;

    double gst_amount = product_price * GST_RATE / 100;
    double final_price = product_price + gst_amount;

    std::cout << std::fixed << std::setprecision(2);

    std::cout << "Product Price: Rs. " << product_price << std::endl;
    std::cout << "GST Rate: " << GST_RATE << "%" << std::endl;
    std::cout << "GST Amount: Rs. " << gst_amount << std::endl;
    std::cout << "Final Price: Rs. " << final_price << std::endl;

    return 0;
}
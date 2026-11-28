#include <iostream>

int main()
{
    int number = 10;

    double converted_number = number;

    double price = 99.99;

    int converted_price = static_cast<int>(price);

    std::cout << "Integer: " << number << std::endl;
    std::cout << "Converted to Double: " << converted_number << std::endl;

    std::cout << "Original Price: " << price << std::endl;
    std::cout << "Converted to Integer: " << converted_price << std::endl;

    return 0;
}
#include <iostream>
#include <string>

int main()
{
    std::string product_name = "Laptop";
    std::string category = "Electronics";

    char product_grade = 'A';

    const char *availability = "In Stock";

    std::cout << "===== Product Information =====" << std::endl;

    std::cout << "Product: " << product_name << std::endl;
    std::cout << "Category: " << category << std::endl;
    std::cout << "Quality Grade: " << product_grade << std::endl;
    std::cout << "Availability: " << availability << std::endl;

    return 0;
}
#include <iostream>

int main()
{
    int decimal = 100;
    int binary = 0b1010;
    int octal = 012;
    int hexadecimal = 0xFF;

    std::cout << "Decimal: " << decimal << std::endl;
    std::cout << "Binary: " << binary << std::endl;
    std::cout << "Octal: " << octal << std::endl;
    std::cout << "Hexadecimal: " << hexadecimal << std::endl;

    return 0;
}
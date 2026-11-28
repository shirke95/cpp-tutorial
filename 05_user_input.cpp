#include <iostream>

int main()
{
    int number1;
    int number2;

    std::cout << "Enter first number: " << std::endl;
    std::cin >> number1;

    std::cout << "Enter second number: " << std::endl;
    std::cin >> number2;

    int result = number1 + number2;

    std::cout << "Addition: " << result << std::endl;

    return 0;
}
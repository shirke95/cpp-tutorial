#include <iostream>
#include <cmath>

int main()
{
    // simple calculator

    double num1, num2;
    char operation;

    std::cout << "Enter first number: " << std::endl;
    std::cin >> num1;

    std::cout << "Enter operation (+, -, *, /, %, ^): " << std::endl;
    std::cin >> operation;

    std::cout << "Enter second number: " << std::endl;
    std::cin >> num2;

    double result;
    switch (operation)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        if (num2 == 0)
        {
            std::cout << "Cannot divide by zero!" << std::endl;
            return 1;
        }
        result = num1 / num2;
        break;
    case '%':
        if (num2 == 0)
        {
            std::cout << "Cannot modulo by zero!" << std::endl;
            return 1;
        }
        result = std::fmod(num1, num2);
        break;
    case '^':
        result = std::pow(num1, num2);
        break;
    default:
        std::cout << "Invalid operation!" << std::endl;
        return 1;
    }

    std::cout << "Result: " << result << std::endl;

    return 0;
}
#include <iostream>

int main()
{
    double value;
    std::cin >> value;

    int convertedValue = static_cast<int>(value);
    std::cout << convertedValue;

    return 0;
}

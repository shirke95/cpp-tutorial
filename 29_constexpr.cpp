#include <iostream>

int main()
{
    constexpr int DAYS_IN_WEEK = 7;
    constexpr double PI = 3.14159;

    constexpr int MONTHS_IN_YEAR = 12;

    std::cout << "Days in Week: " << DAYS_IN_WEEK << std::endl;
    std::cout << "Pi Value: " << PI << std::endl;
    std::cout << "Months in Year: " << MONTHS_IN_YEAR << std::endl;

    return 0;
}
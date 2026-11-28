#include <iostream>
#include <iomanip>

int main()
{
    float price = 99.99f;
    double salary = 55000.75;
    long double balance = 123456789.123456L;

    std::cout << std::fixed << std::setprecision(2);

    std::cout << "Price: " << price << std::endl;
    std::cout << "Salary: " << salary << std::endl;
    std::cout << "Balance: " << balance << std::endl;

    return 0;
}
#include <iostream>
#include <iomanip>

int main()
{
    double revenue = 25'00'000.00;
    double expenses = 12'50'000.00;

    double profit = revenue - expenses;

    std::cout << std::fixed << std::setprecision(2);

    std::cout << "===== Financial Report =====" << std::endl;

    std::cout << "Revenue: Rs. " << revenue << std::endl;
    std::cout << "Expenses: Rs. " << expenses << std::endl;
    std::cout << "Profit: Rs. " << profit << std::endl;

    return 0;
}
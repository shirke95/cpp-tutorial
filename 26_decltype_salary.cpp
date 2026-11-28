#include <iostream>
#include <string>

int main()
{
    double basic_salary = 50000.00;

    decltype(basic_salary) hra = 10000.00;
    decltype(basic_salary) bonus = 5000.00;

    decltype(basic_salary) total_salary =
        basic_salary + hra + bonus;

    std::cout << "===== Salary Details =====" << std::endl;

    std::cout << "Basic Salary: " << basic_salary << std::endl;
    std::cout << "HRA: " << hra << std::endl;
    std::cout << "Bonus: " << bonus << std::endl;
    std::cout << "Total Salary: " << total_salary << std::endl;

    return 0;
}
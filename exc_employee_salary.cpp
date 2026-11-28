#include <iostream>
#include <string>
#include <iomanip>

int main()
{
    std::string name;
    double monthlySalary;

    std::cout << "Enter employee name: " << std::endl;
    std::getline(std::cin, name);

    std::cout << "Enter monthly salary: " << std::endl;
    std::cin >> monthlySalary;

    if (monthlySalary < 0)
    {
        std::cout << "Invalid salary. Salary cannot be negative." << std::endl;
        return 1;
    }

    double annualSalary = monthlySalary * 12;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Employee Name: " << name << std::endl;
    std::cout << "Monthly Salary: " << monthlySalary << std::endl;
    std::cout << "Annual Salary: " << annualSalary << std::endl;

    return 0;
}

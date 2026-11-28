#include <iostream>

int main()
{
    double basicSalary, hra, bonus;

    std::cout << "Enter basic salary: " << std::endl;
    std::cin >> basicSalary;

    std::cout << "Enter HRA: " << std::endl;
    std::cin >> hra;

    std::cout << "Enter bonus: " << std::endl;
    std::cin >> bonus;

    double totalSalary = basicSalary + hra + bonus;

    std::cout << "Total salary: " << totalSalary << std::endl;

    return 0;
}

#include <iostream>

int main()
{
    int number = 100;

    decltype(number) another_number = 200;

    double salary = 55000.50;

    decltype(salary) bonus = 5000.50;

    std::cout << "Number: " << number << std::endl;
    std::cout << "Another Number: " << another_number << std::endl;

    std::cout << "Salary: " << salary << std::endl;
    std::cout << "Bonus: " << bonus << std::endl;

    return 0;
}
#include <iostream>
#include <string>
#include <typeinfo>

int main()
{
    auto age = 25;
    auto salary = 55000.50;
    auto grade = 'A';
    auto is_active = true;
    auto name = std::string("Sushant");

    std::cout << "Age: " << age << std::endl;
    std::cout << "Salary: " << salary << std::endl;
    std::cout << "Grade: " << grade << std::endl;
    std::cout << "Active: " << std::boolalpha << is_active << std::endl;
    std::cout << "Name: " << name << std::endl;

    return 0;
}
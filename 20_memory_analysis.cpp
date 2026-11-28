#include <iostream>
#include <string>

int main()
{
    int employee_id = 101;
    double salary = 55000.50;
    bool is_active = true;
    std::string employee_name = "Rahul";

    std::cout << "===== Memory Analysis =====" << std::endl;

    std::cout << "Employee ID: " << sizeof(employee_id) << " bytes" << std::endl;
    std::cout << "Salary: " << sizeof(salary) << " bytes" << std::endl;
    std::cout << "Active: " << sizeof(is_active) << " bytes" << std::endl;
    std::cout << "Name object: " << sizeof(employee_name) << " bytes" << std::endl;

    return 0;
}
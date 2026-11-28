#include <iostream>
#include <string>

int main()
{
    auto employee_id = 101;
    auto employee_name = std::string("Rahul");
    auto salary = 65000.50;
    auto experience = 5;
    auto is_active = true;

    std::cout << "===== Employee Details =====" << std::endl;

    std::cout << "ID: " << employee_id << std::endl;
    std::cout << "Name: " << employee_name << std::endl;
    std::cout << "Salary: " << salary << std::endl;
    std::cout << "Experience: " << experience << std::endl;
    std::cout << "Active: " << std::boolalpha << is_active << std::endl;

    return 0;
}
#include <iostream>
#include <string>

int main()
{
    std::string name;
    std::string department;
    std::string email;

    std::cout << "Enter Employee Name: " << std::endl;
    std::getline(std::cin, name);

    std::cout << "Enter Department: " << std::endl;
    std::getline(std::cin, department);

    std::cout << "Enter Email: " << std::endl;
    std::getline(std::cin, email);

    std::cout << "===== Employee Details =====" << std::endl;

    std::cout << "Name: " << name << std::endl;
    std::cout << "Department: " << department << std::endl;
    std::cout << "Email: " << email << std::endl;

    return 0;
}
#include <iostream>

int main()
{
    // personal information registration
    std::string name;
    int age;
    double salary;

    std::cout << "Enter employee name: " << std::endl;
    std::getline(std::cin, name);

    std::cout << "Enter employee age: " << std::endl;
    std::cin >> age;

    std::cout << "Enter employee salary: " << std::endl;
    std::cin >> salary;

    std::cout << "===== Employee Registration =====" << std::endl;

    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Salary: " << salary << std::endl;

    return 0;
}
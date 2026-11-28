#include <iostream>

int main()
{
    const int age = 25;
    const double salary = 55000.50;

    std::cout << "Age: " << age << std::endl;
    std::cout << "Salary: " << salary << std::endl;

    // age = 30; // Error: cannot modify a const variable

    return 0;
}
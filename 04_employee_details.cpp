#include <iostream>

int main()
{
    std::string employee_name = "Rahul";
    int employee_id = 101;
    int experience = 5;
    double monthly_salary = 55000.00;
    bool is_permanent = true;

    std::cout << "===== Employee Details =====" << std::endl;

    std::cout << "Name: " << employee_name << std::endl;
    std::cout << "Employee ID: " << employee_id << std::endl;
    std::cout << "Experience: " << experience << " years" << std::endl;
    std::cout << "Monthly Salary: " << monthly_salary << std::endl;

    std::cout << std::boolalpha;
    std::cout << "Permanent Employee: " << is_permanent << std::endl;

    return 0;
}

// #include <iostream>

// int main()
// {
//     int number;

//     std::cout << "Enter a number: " << std::endl;
//     std::cin >> number;

//     std::cout << "Number: " << number << std::endl;

//     return 0;
// }
#include <iostream>

int main()
{
    constexpr unsigned int READ = 0b001;
    constexpr unsigned int WRITE = 0b010;
    constexpr unsigned int DELETE = 0b100;

    unsigned int user_permissions = READ | WRITE;

    std::cout << std::boolalpha;

    std::cout << "Can Read: "
              << ((user_permissions & READ) != 0) << std::endl;

    std::cout << "Can Write: "
              << ((user_permissions & WRITE) != 0) << std::endl;

    std::cout << "Can Delete: "
              << ((user_permissions & DELETE) != 0) << std::endl;

    return 0;
}
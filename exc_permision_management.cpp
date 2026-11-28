#include <iostream>

enum Permission
{
    READ = 1 << 0,
    WRITE = 1 << 1,
    DELETE = 1 << 2
};

bool hasPermission(int permissions, Permission required)
{
    return (permissions & required) != 0;
}

int main()
{
    int permissions = READ | WRITE;

    std::cout << "READ: " << hasPermission(permissions, READ) << std::endl;
    std::cout << "WRITE: " << hasPermission(permissions, WRITE) << std::endl;
    std::cout << "DELETE: " << hasPermission(permissions, DELETE) << std::endl;

    return 0;
}

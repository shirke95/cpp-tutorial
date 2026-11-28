#include <iostream>

#define APP_NAME "Employee Management System"
#define APP_VERSION "1.0.0"
#define MAX_LOGIN_ATTEMPTS 3

int main()
{
    std::cout << "===== Application Configuration =====" << std::endl;

    std::cout << "Application: " << APP_NAME << std::endl;
    std::cout << "Version: " << APP_VERSION << std::endl;
    std::cout << "Maximum Login Attempts: "
              << MAX_LOGIN_ATTEMPTS << std::endl;

    return 0;
}
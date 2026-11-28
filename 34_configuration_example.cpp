#include <iostream>
#include <string>

// Compile-time configuration
constexpr int MAX_RETRIES = 3;
constexpr double TAX_RATE = 18.0;

int main()
{
    // Fixed application name
    const std::string APP_NAME = "MyShop";

    // Runtime configuration
    int timeout_seconds;

    std::cout << "Enter API timeout in seconds: ";
    std::cin >> timeout_seconds;

    std::cout << "===== Configuration =====" << std::endl;

    std::cout << "Application: " << APP_NAME << std::endl;
    std::cout << "Maximum Retries: " << MAX_RETRIES << std::endl;
    std::cout << "Tax Rate: " << TAX_RATE << "%" << std::endl;
    std::cout << "API Timeout: " << timeout_seconds << " seconds" << std::endl;

    return 0;
}
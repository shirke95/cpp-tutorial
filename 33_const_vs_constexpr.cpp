#include <iostream>

#define MAX_USERS 100

int main()
{
    const int age = 25;

    constexpr int DAYS = 7;

    std::cout << "Age: " << age << std::endl;
    std::cout << "Days: " << DAYS << std::endl;
    std::cout << "Maximum Users: " << MAX_USERS << std::endl;

    return 0;
}
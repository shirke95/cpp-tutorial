#include <iostream>
#include <string>

int main()
{
    char grade = 'A';

    const char *message = "Welcome to C++";

    std::string name = "Sushant Shirke";

    std::cout << "Grade: " << grade << std::endl;
    std::cout << "Message: " << message << std::endl;
    std::cout << "Name: " << name << std::endl;

    return 0;
}
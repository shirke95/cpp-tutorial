#include <iostream>
#include <string>

int main()
{
    std::string username = "admin";
    std::string password = "admin123";

    bool is_authenticated = false;

    if (username == "admin" && password == "admin123")
    {
        is_authenticated = true;
    }

    std::cout << std::boolalpha;

    if (is_authenticated)
    {
        std::cout << "Login Successful!" << std::endl;
    }
    else
    {
        std::cout << "Invalid Credentials!" << std::endl;
    }

    return 0;
}
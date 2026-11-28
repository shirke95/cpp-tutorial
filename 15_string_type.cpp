#include <iostream>
#include <string>

int main()
{
    std::string first_name = "Sushant";
    std::string last_name = "Shirke";

    std::string full_name = first_name + " " + last_name;

    std::cout << "First Name: " << first_name << std::endl;
    std::cout << "Last Name: " << last_name << std::endl;
    std::cout << "Full Name: " << full_name << std::endl;

    std::cout << "Name Length: " << full_name.length() << std::endl;

    return 0;
}
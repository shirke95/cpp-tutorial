#include <iostream>

int main()
{
    std::string name;
    int age;
    std::string address;
    std::string phone_number;

    std::cout << "Enter your name: " << std::endl;
    std::getline(std::cin, name);

    std::cout << "Enter your age: " << std::endl;
    std::cin >> age;
    std::cin.ignore(); // Ignore the newline character left in the input buffer

    std::cout << "Enter your address: " << std::endl;
    std::getline(std::cin, address);

    std::cout << "Enter your phone number: " << std::endl;
    std::getline(std::cin, phone_number);

    std::cout << "\n===== Personal Information =====" << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Address: " << address << std::endl;
    std::cout << "Phone Number: " << phone_number << std::endl;

    return 0;
}
#include <iostream>
int main()
{
    std::string greeting = "Hello";
    std::cout << greeting << std::endl;
    std::string firstName = "John ";
    std::string lastName = "Doe";
    std::string fullName = firstName + lastName;
    std::cout << fullName << std::endl;
    std::string myname = firstName.append("Sushant");
    std::cout << myname << std::endl;
    int x = 10;
    int y = 20;
    int z = x + y;                          // z will be 30 (an integer)
    std::string result = std::to_string(z); // result will be "30" (a string)
    std::cout << result << std::endl;
    std::string a = "10";
    std::string b = "20";
    std::string c = a + b; // c will be "1020" (a string)
    std::cout << c << std::endl;
    std::string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::cout << "The length of the txt string is: " << txt.length() << std::endl;
    std::cout << "The length of the txt string is: " << txt.size() << std::endl;
    std::string myString = "Hello";
    std::cout << myString[0] << std::endl;
    std::cout << myString[1] << std::endl;
    std::cout << myString[myString.length() - 1] << std::endl;
    myString[0] = 'J';
    std::cout << myString << std::endl;
    std::string firstName01;
    std::cout << "Type your first name: ";
    std::cin >> firstName01; // get user input from the keyboard
    std::cout << "Your name is: " << firstName01 << std::endl;
    return 0;
}
#include <iostream>
#include <string>

int main()
{
    std::string path = R"(C:\Users\Sushant\Documents\C++)";

    std::string message = R"(Hello
Welcome to C++
Let's learn programming)";

    std::cout << "File Path:" << std::endl;
    std::cout << path << std::endl;

    std::cout << "Message:" << std::endl;
    std::cout << message << std::endl;

    return 0;
}
#include <iostream>
#include <string>

int main()
{
    int integerValue = 42;
    float floatValue = 3.14f;
    double doubleValue = 3.141592653589793;
    char charValue = 'A';
    bool boolValue = true;
    std::string stringValue = "Hello, C++!";

    std::cout << "int: " << integerValue << ", size: " << sizeof(integerValue) << " bytes" << std::endl;
    std::cout << "float: " << floatValue << ", size: " << sizeof(floatValue) << " bytes" << std::endl;
    std::cout << "double: " << doubleValue << ", size: " << sizeof(doubleValue) << " bytes" << std::endl;
    std::cout << "char: " << charValue << ", size: " << sizeof(charValue) << " bytes" << std::endl;
    std::cout << std::boolalpha << "bool: " << boolValue
              << ", size: " << sizeof(boolValue) << " bytes" << std::endl;
    std::cout << "string: " << stringValue << ", size: " << sizeof(stringValue) << " bytes" << std::endl;

    return 0;
}

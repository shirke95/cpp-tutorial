#include <iostream>

// bool 1 byte
// char 1 byte
// int 2 or 4 bytes
// float 4 bytes
// double 8 bytes
int main()
{
    int myNum = 5;                // Integer (whole number)
    float myFloatNum = 5.99;      // Floating point number
    double myDoubleNum = 9.98;    // Floating point number
    char myLetter = 'D';          // Character
    bool myBoolean = true;        // Boolean
    std::string myText = "Hello"; // String
    float f1 = 35e3;
    double d1 = 12E4;
    bool isCodingFun = true;
    bool isFishTasty = false;
    char myGrade = 'B';
    char a = 65, b = 66, c = 67;
    std::string greeting = "Hello";

    // auto only works when you assign a value at the same time (You can't declare auto x; without assigning a value)
    // Creating auto variables
    auto autoMyNum = 5;                       // int
    auto autoMyFloatNum = 5.99f;              // float
    auto autoMyDoubleNum = 9.98;              // double
    auto autoMyLetter = 'D';                  // char
    auto autoMyBoolean = true;                // bool
    auto autoMyString = std::string("Hello"); // std::string
    // Create variables of different data types
    int items = 50;
    double cost_per_item = 9.99;
    double total_cost = items * cost_per_item;
    char currency = '$';

    std::cout << "Integer: " << myNum << std::endl;
    std::cout << "Float: " << myFloatNum << std::endl;
    std::cout << "Double: " << myDoubleNum << std::endl;
    std::cout << "Character: " << myLetter << std::endl;
    std::cout << "Boolean: " << myBoolean << std::endl;
    std::cout << "String: " << myText << std::endl;
    std::cout << "Float (scientific notation): " << f1 << std::endl;
    std::cout << "Double (scientific notation): " << d1 << std::endl;
    std::cout << "Is coding fun? " << isCodingFun << std::endl;
    std::cout << "Is fish tasty? " << isFishTasty << std::endl;
    std::cout << "Grade: " << myGrade << std::endl;
    std::cout << "Characters: " << a << ", " << b << ", " << c << std::endl;
    std::cout << "Greeting: " << greeting << std::endl;
    std::cout << "Auto variable autoMyNum: " << autoMyNum << std::endl;
    std::cout << "Auto variable autoMyFloatNum: " << autoMyFloatNum << std::endl;
    std::cout << "Auto variable autoMyDoubleNum: " << autoMyDoubleNum << std::endl;
    std::cout << "Auto variable autoMyLetter: " << autoMyLetter << std::endl;
    std::cout << "Auto variable autoMyBoolean: " << autoMyBoolean << std::endl;
    std::cout << "Auto variable autoMyString: " << autoMyString << std::endl;

    std::cout << "Total cost: " << currency << total_cost << std::endl;
    return 0;
}
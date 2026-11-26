#include <iostream>

int main()
{
    int x = 10;
    int y = 3;

    std::cout << (x + y) << std::endl; // 13
    std::cout << (x - y) << std::endl; // 7
    std::cout << (x * y) << std::endl; // 30
    std::cout << (x / y) << std::endl; // 3 (integer division)
    std::cout << (x % y) << std::endl; // 1

    int z = 5;
    ++z;
    std::cout << z << std::endl; // 6
    --z;
    std::cout << z << std::endl; // 5

    int a = 10;
    int b = 3;
    std::cout << (a / b) << std::endl; // Integer division, result is 3

    double c = 10.0;
    double d = 3.0;
    std::cout << (c / d) << std::endl; // Decimal division, result is 3.333...

    // assignement operators:
    int e = 10;

    e += 5;                      // same as e = e + 5
    std::cout << e << std::endl; // 15

    e *= 2;                      // same as e = e * 2
    std::cout << e << std::endl; // 30

    int savings = 100;
    savings += 50; // add 50 to savings

    std::cout << "Total savings: " << savings << std::endl;

    // Comparison operators:
    int g = 5;
    int h = 3;
    std::cout << (g > h) << std::endl; // returns 1 (true) because 5 is greater than 3
    int age = 18;

    std::cout << (age >= 18) << std::endl; // 1 (true), old enough to vote
    std::cout << (age < 18) << std::endl;  // 0 (false)

    int passwordLength = 5;

    std::cout << (passwordLength >= 8) << std::endl; // 0 (false), too short
    std::cout << (passwordLength < 8) << std::endl;  // 1 (true), needs more characters

    // Operator Precedence:
    int result1 = 2 + 3 * 4;   // 2 + 12 = 14
    int result2 = (2 + 3) * 4; // 5 * 4 = 20

    std::cout << result1 << std::endl;
    std::cout << result2 << std::endl;

    int result3 = 10 - 2 + 5;   // (10 - 2) + 5 = 13
    int result4 = 10 - (2 + 5); // 10 - 7 = 3

    std::cout << result3 << std::endl;
    std::cout << result4 << std::endl;
    return 0;
}
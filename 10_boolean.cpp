#include <iostream>

int main()
{
    bool isCodingFun = true;
    bool isFishTasty = false;

    std::cout << isCodingFun << std::endl; // Outputs 1 (true)
    std::cout << isFishTasty << std::endl; // Outputs 0 (false)

    std::cout << std::boolalpha; // enable printing "true"/"false"

    std::cout << isCodingFun << std::endl; // Outputs true
    std::cout << isFishTasty << std::endl; // Outputs false

    int x = 10;
    int y = 9;
    std::cout << (x > y) << std::endl;    // returns 1 (true), because 10 is higher than 9
    std::cout << (x == 10) << std::endl;  // returns 1 (true), because the value of x is equal to 10
    std::cout << (10 == 15) << std::endl; // returns 0 (false), because 10 is not equal to 15

    int myAge = 25;
    int votingAge = 18;

    if (myAge >= votingAge)
    {
        std::cout << "Old enough to vote!" << std::endl;
    }
    else
    {
        std::cout << "Not old enough to vote." << std::endl;
    }

    return 0;
}
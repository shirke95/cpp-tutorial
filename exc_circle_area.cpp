#include <iostream>

constexpr double circleArea(double radius)
{
    constexpr double pi = 3.141592653589793;
    return pi * radius * radius;
}

int main()
{
    constexpr double area = circleArea(5.0);
    std::cout << area << std::endl;

    return 0;
}

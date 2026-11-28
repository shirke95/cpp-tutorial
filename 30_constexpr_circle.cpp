#include <iostream>
#include <iomanip>

constexpr double PI = 3.14159265359;

constexpr double calculate_area(double radius)
{
    return PI * radius * radius;
}

int main()
{
    constexpr double radius = 5.0;

    constexpr double area = calculate_area(radius);

    std::cout << std::fixed << std::setprecision(2);

    std::cout << "Radius: " << radius << std::endl;
    std::cout << "Circle Area: " << area << std::endl;

    return 0;
}
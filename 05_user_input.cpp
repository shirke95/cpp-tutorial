#include <iostream>

int main()
{
    int x, y;
    int sum;
    std::cout << "Type a number: " << std::endl;
    std::cin >> x;
    std::cout << "Type another number: " << std::endl;
    std::cin >> y;
    sum = x + y;
    std::cout << "Sum is: " << sum << std::endl;
    return 0;
}
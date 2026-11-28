#include <iostream>

int main()
{
    bool is_logged_in = true;
    bool is_admin = false;

    std::cout << std::boolalpha;

    std::cout << "Logged In: " << is_logged_in << std::endl;
    std::cout << "Admin: " << is_admin << std::endl;

    return 0;
}
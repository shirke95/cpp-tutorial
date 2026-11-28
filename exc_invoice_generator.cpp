#include <iostream>
using namespace std;

int main()
{
    const double subtotal = 1'250.75;
    const double tax = 125.08;
    const double total = subtotal + tax;

    cout << "==============================\n"
         << "          INVOICE             \n"
         << "==============================\n"
         << "Item\t\tQuantity\tPrice\n"
         << "--------------------------------\n"
         << "Laptop\t\t1\t\t$1'000.00\n"
         << "Mouse\t\t2\t\t$125.75\n"
         << "--------------------------------\n"
         << "Subtotal:\t\t$" << subtotal << '\n'
         << "Tax:\t\t\t$" << tax << '\n'
         << "==============================\n"
         << "TOTAL:\t\t\t$" << total << '\n'
         << "==============================\n";

    return 0;
}

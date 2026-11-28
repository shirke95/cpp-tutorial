#include <iostream>

int main()
{
    int customer_id = 101;
    long long account_number = 123456789012LL;
    int transaction_count = 150;

    std::cout << "===== Bank Account =====" << std::endl;

    std::cout << "Customer ID: " << customer_id << std::endl;
    std::cout << "Account Number: " << account_number << std::endl;
    std::cout << "Transactions: " << transaction_count << std::endl;

    return 0;
}
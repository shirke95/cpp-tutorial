#include <iostream>
#include <iomanip>

int main()
{
    double loan_amount = 500000.00;
    double interest_rate = 8.5;
    int years = 5;

    double simple_interest =
        loan_amount * interest_rate * years / 100.0;

    double total_amount = loan_amount + simple_interest;

    std::cout << std::fixed << std::setprecision(2);

    std::cout << "Loan Amount: Rs. " << loan_amount << std::endl;
    std::cout << "Interest Rate: " << interest_rate << "%" << std::endl;
    std::cout << "Duration: " << years << " years" << std::endl;
    std::cout << "Interest: Rs. " << simple_interest << std::endl;
    std::cout << "Total Amount: Rs. " << total_amount << std::endl;

    return 0;
}
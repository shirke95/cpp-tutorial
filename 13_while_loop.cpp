#include <iostream>

int main()
{
    int i = 0;
    while (i < 5)
    {
        std::cout << i << std::endl;
        i++;
    }

    int countdown = 3;

    while (countdown > 0)
    {
        std::cout << countdown << std::endl;
        countdown--;
    }

    std::cout << "Happy New Year!!" << std::endl;

    int j = 0;
    do
    {
        std::cout << j << std::endl;
        j++;
    } while (j < 5);

    int k = 10;
    do
    {
        std::cout << "k is " << k << std::endl;
        k++;
    } while (k < 5);
    int number;
    do
    {
        std::cout << "Enter a positive number: " << std::endl;
        std::cin >> number;
    } while (number > 0);

    int countdown1 = 3;

    while (countdown1 > 0)
    {
        std::cout << countdown1 << std::endl;
        countdown1--;
    }

    std::cout << "Happy New Year!!" << std::endl;

    int l = 0;

    while (l <= 10)
    {
        std::cout << l << std::endl;
        l += 2;
    }

    // A variable with some specific numbers
    int numbers = 12345;

    // A variable to store the reversed number
    int revNumbers = 0;

    // Reverse and reorder the numbers
    while (numbers)
    {
        // Get the last number of 'numbers' and add it to 'revNumbers'
        revNumbers = revNumbers * 10 + numbers % 10;
        // Remove the last number of 'numbers'
        numbers /= 10;
    }

    std::cout << "Reversed numbers: " << revNumbers << std::endl;

    int dice = 1;

    while (dice <= 6)
    {
        if (dice < 6)
        {
            std::cout << "No Yatzy!" << std::endl;
        }
        else
        {
            std::cout << "Yatzy!!" << std::endl;
        }
        dice = dice + 1;
    }
    return 0;
}